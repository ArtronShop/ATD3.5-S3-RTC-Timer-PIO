// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: LED

#include "../ui.h"

void ui_Index_screen_init(void)
{
    ui_Index = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Index, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_Index, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Index, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Index, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Index, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_time_on_label = lv_label_create(ui_Index);
    lv_obj_set_width(ui_time_on_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_time_on_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_time_on_label, -121);
    lv_obj_set_y(ui_time_on_label, -100);
    lv_obj_set_align(ui_time_on_label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_time_on_label, "เวลาเปิด");
    lv_obj_set_style_text_font(ui_time_on_label, &ui_font_Kanit30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on_group = lv_obj_create(ui_Index);
    lv_obj_remove_style_all(ui_on_group);
    lv_obj_set_width(ui_on_group, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on_group, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_on_group, -120);
    lv_obj_set_y(ui_on_group, 0);
    lv_obj_set_align(ui_on_group, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_on_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_on_group, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_on_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_on_hour_roller = lv_roller_create(ui_on_group);
    lv_roller_set_options(ui_on_hour_roller,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_on_hour_roller, 140);
    lv_obj_set_width(ui_on_hour_roller, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_on_hour_roller, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_on_hour_roller, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on_dot = lv_label_create(ui_on_group);
    lv_obj_set_width(ui_on_dot, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on_dot, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_on_dot, LV_ALIGN_CENTER);
    lv_label_set_text(ui_on_dot, ":");
    lv_obj_set_style_text_font(ui_on_dot, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_on_dot, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_on_dot, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_on_dot, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_on_dot, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on_min_roller = lv_roller_create(ui_on_group);
    lv_roller_set_options(ui_on_min_roller,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_on_min_roller, 140);
    lv_obj_set_width(ui_on_min_roller, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_on_min_roller, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_on_min_roller, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off_group = lv_obj_create(ui_Index);
    lv_obj_remove_style_all(ui_off_group);
    lv_obj_set_width(ui_off_group, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off_group, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_off_group, 120);
    lv_obj_set_y(ui_off_group, 0);
    lv_obj_set_align(ui_off_group, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_off_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_off_group, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_off_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_off_hour_roller = lv_roller_create(ui_off_group);
    lv_roller_set_options(ui_off_hour_roller,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_off_hour_roller, 140);
    lv_obj_set_width(ui_off_hour_roller, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_off_hour_roller, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_off_hour_roller, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off_dot = lv_label_create(ui_off_group);
    lv_obj_set_width(ui_off_dot, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off_dot, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_off_dot, LV_ALIGN_CENTER);
    lv_label_set_text(ui_off_dot, ":");
    lv_obj_set_style_text_font(ui_off_dot, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_off_dot, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_off_dot, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_off_dot, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_off_dot, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off_min_roller = lv_roller_create(ui_off_group);
    lv_roller_set_options(ui_off_min_roller,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_off_min_roller, 140);
    lv_obj_set_width(ui_off_min_roller, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_off_min_roller, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_off_min_roller, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_time_off_label = lv_label_create(ui_Index);
    lv_obj_set_width(ui_time_off_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_time_off_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_time_off_label, 121);
    lv_obj_set_y(ui_time_off_label, -100);
    lv_obj_set_align(ui_time_off_label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_time_off_label, "เวลาปิด");
    lv_obj_set_style_text_font(ui_time_off_label, &ui_font_Kanit30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_time_now_label = lv_label_create(ui_Index);
    lv_obj_set_width(ui_time_now_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_time_now_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_time_now_label, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_time_now_label, "เวลาปัจจุบัน: 00:00:00 น.");
    lv_obj_set_style_text_font(ui_time_now_label, &ui_font_Kanit24, LV_PART_MAIN | LV_STATE_DEFAULT);

}
