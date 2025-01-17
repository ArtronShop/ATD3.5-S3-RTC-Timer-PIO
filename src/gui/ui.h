// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: LED

#ifndef _LED_UI_H
#define _LED_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Index
void ui_Index_screen_init(void);
extern lv_obj_t * ui_Index;
extern lv_obj_t * ui_time_on_label;
extern lv_obj_t * ui_on_group;
extern lv_obj_t * ui_on_hour_roller;
extern lv_obj_t * ui_on_dot;
extern lv_obj_t * ui_on_min_roller;
extern lv_obj_t * ui_off_group;
extern lv_obj_t * ui_off_hour_roller;
extern lv_obj_t * ui_off_dot;
extern lv_obj_t * ui_off_min_roller;
extern lv_obj_t * ui_time_off_label;
extern lv_obj_t * ui_time_now_label;
extern lv_obj_t * ui____initial_actions0;





LV_FONT_DECLARE(ui_font_Kanit24);
LV_FONT_DECLARE(ui_font_Kanit30);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
