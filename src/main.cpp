#include <Arduino.h>
#include <lvgl.h>
#include <ATD3.5-S3.h>
#include "gui/ui.h"
#include <WiFi.h>
#include "time.h"

const char* ssid     = "CYD1";
const char* password = "12345678";

const int output_pin = 39; // O1

const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = 7 * 60 * 60;
const int   daylightOffset_sec = 0;

void setup() {
  Serial.begin(115200);
  
  // Setup peripherals
  Display.begin(0); // rotation number 0
  Touch.begin();
  Sound.begin();
  // Card.begin(); // uncomment if you want to Read/Write/Play/Load file in MicroSD Card
  pinMode(output_pin, OUTPUT);

  // Map peripheral to LVGL
  Display.useLVGL(); // Map display to LVGL
  Touch.useLVGL(); // Map touch screen to LVGL
  Sound.useLVGL(); // Map speaker to LVGL
  // Card.useLVGL(); // Map MicroSD Card to LVGL File System

  Display.enableAutoSleep(120); // Auto off display if not touch in 2 min
  
  // Add load your UI function
  ui_init();

  // Add event handle

  // Connect to Wi-Fi
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected.");
  
  // Init and get the time
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
}

void loop() {
  Display.loop(); // Keep GUI work

  struct tm timeinfo;
  if (!getLocalTime(&timeinfo)){
    Serial.println("Failed to obtain time");
    delay(100);
    return;
  }

  lv_label_set_text_fmt(ui_time_now_label, "เวลาปัจจุบัน: %02d:%02d:%02d น.", timeinfo.tm_hour, timeinfo.tm_min, timeinfo.tm_sec);
  
  int time_now = (timeinfo.tm_hour * 60) + timeinfo.tm_min;

  int time_on_hour = lv_roller_get_selected(ui_on_hour_roller);
  int time_on_min = lv_roller_get_selected(ui_on_min_roller);
  int time_on = (time_on_hour * 60) + time_on_min;

  int time_off_hour = lv_roller_get_selected(ui_off_hour_roller);
  int time_off_min = lv_roller_get_selected(ui_off_min_roller);
  int time_off = (time_off_hour * 60) + time_off_min;

  if (time_now >= time_on && time_now < time_off) {
    digitalWrite(output_pin, HIGH);
  } else {
    digitalWrite(output_pin, LOW);
  }
}
