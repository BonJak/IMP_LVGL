//
// Created by user on 11/18/22.
//

#include "components.h"

static lv_coord_t col_dsc[] = {400, 400, LV_GRID_TEMPLATE_LAST};
static lv_coord_t row_dsc[] = {300, 180, LV_GRID_TEMPLATE_LAST};

void create_layout(void) {
    grid = lv_obj_create(lv_scr_act());
    lv_obj_set_grid_dsc_array(grid, col_dsc, row_dsc);
    lv_obj_set_size(grid, 800, 480);
    lv_obj_center(grid);

    wrapper1 = lv_obj_create(grid);
    wrapper2 = lv_obj_create(grid);

    lv_obj_set_grid_cell(wrapper1, LV_GRID_ALIGN_STRETCH, 0, 1, LV_GRID_ALIGN_STRETCH, 0, 1);
    lv_obj_set_flex_flow(wrapper1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(wrapper1, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);

    lv_obj_set_grid_cell(wrapper2, LV_GRID_ALIGN_STRETCH, 1, 1, LV_GRID_ALIGN_STRETCH, 0, 1);
    lv_obj_set_flex_flow(wrapper2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(wrapper2, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);

    freq_row = lv_obj_create(wrapper1);
    freq_label = lv_label_create(freq_row);
    freq_text_box = lv_textarea_create(freq_row);
    VSWR_row = lv_obj_create(wrapper1);
    VSWR_label = lv_label_create(VSWR_row);
    VSWR_textbox = lv_textarea_create(VSWR_row);
    refl_coeff_amp_row = lv_obj_create(wrapper1);
    refl_coeff_ampLabel = lv_label_create(refl_coeff_amp_row);
    refl_coeff_ampTextBox = lv_textarea_create(refl_coeff_amp_row);
    refl_coeff_phase_row = lv_obj_create(wrapper1);
    refl_coeff_phaseLabel = lv_label_create(refl_coeff_phase_row);
    refl_coeff_phaseTextBox = lv_textarea_create(refl_coeff_phase_row);
    incid_pwr_row = lv_obj_create(wrapper1);
    incid_pwrLabel = lv_label_create(incid_pwr_row);
    incid_pwrTextBox = lv_textarea_create(incid_pwr_row);
    incid_pwr_phase_row = lv_obj_create(wrapper1);
    incid_pwr_phaseLabel = lv_label_create(incid_pwr_phase_row);
    incid_pwr_phaseTextBox = lv_textarea_create(incid_pwr_phase_row);
    refl_power_row = lv_obj_create(wrapper1);
    refl_pwrLabel = lv_label_create(refl_power_row);
    refl_pwrTextBox = lv_textarea_create(refl_power_row);
    refl_pwr_phase_row = lv_obj_create(wrapper1);
    refl_pwr_phaseLabel = lv_label_create(refl_pwr_phase_row);
    refl_pwr_phaseTextBox = lv_textarea_create(refl_pwr_phase_row);
    match_ct_type_row = lv_obj_create(wrapper2);
    match_ct_typeLabel = lv_label_create(match_ct_type_row);
    match_ct_typeTextBox = lv_textarea_create(match_ct_type_row);
    match_L_row = lv_obj_create(wrapper2);
    match_LLabel = lv_label_create(match_L_row);
    match_LTextBox = lv_textarea_create(match_L_row);
    match_C1_row = lv_obj_create(wrapper2);
    match_C1Label = lv_label_create(match_C1_row);
    match_C1TextBox = lv_textarea_create(match_C1_row);
    match_C2_row = lv_obj_create(wrapper2);
    match_C2Label = lv_label_create(match_C2_row);
    match_C2TextBox = lv_textarea_create(match_C2_row);
    lv_obj_set_flex_grow(freq_row, 1);
    lv_obj_set_size(freq_row, 100, 40);
    lv_label_set_text(freq_label, "Frequency");
    lv_textarea_set_text(freq_text_box, "0");

    lv_obj_set_flex_grow(VSWR_row, 1);
    lv_obj_set_size(VSWR_label, 100, 40);
    lv_label_set_text(VSWR_label, "VSWR");
    lv_textarea_set_text(VSWR_textbox, "0");

    lv_obj_set_flex_grow(refl_coeff_amp_row, 1);
    lv_obj_set_size(refl_coeff_amp_row, 100, 40);
    lv_label_set_text(refl_coeff_ampLabel, "Reflection Coefficient Amplitude");
    lv_textarea_set_text(refl_coeff_ampTextBox, "0");

    lv_obj_set_flex_grow(refl_coeff_phase_row, 1);
    lv_obj_set_size(refl_coeff_phase_row, 100, 40);
    lv_label_set_text(refl_coeff_phaseLabel, "Reflection Coefficient Phase");
    lv_textarea_set_text(refl_coeff_phaseTextBox, "0");

    lv_obj_set_flex_grow(incid_pwr_row, 1);
    lv_obj_set_size(incid_pwr_row, 100, 40);
    lv_label_set_text(incid_pwrLabel, "Incident Power");
    lv_textarea_set_text(incid_pwrTextBox, "0");

    lv_obj_set_flex_grow(incid_pwr_phase_row, 1);
    lv_obj_set_size(incid_pwr_phase_row, 100, 40);
    lv_label_set_text(incid_pwr_phaseLabel, "Incident Power Phase");
    lv_textarea_set_text(incid_pwr_phaseTextBox, "0");


    lv_obj_set_flex_grow(match_ct_type_row, 1);
    lv_obj_set_size(match_ct_type_row, 100, 40);
    lv_label_set_text(match_ct_typeLabel, "Matching Circuit");
    lv_textarea_set_text(match_ct_typeTextBox, "0");

    lv_obj_set_flex_grow(match_L_row, 1);
    lv_obj_set_size(match_L_row, 100, 40);
    lv_label_set_text(match_LLabel, "L");
    lv_textarea_set_text(match_LTextBox, "0");

    lv_obj_set_flex_grow(match_C1_row, 1);
    lv_obj_set_size(match_C1_row, 100, 40);
    lv_label_set_text(match_C1Label, "C1");
    lv_textarea_set_text(match_C1TextBox, "0");

    lv_obj_set_flex_grow(match_C2_row, 1);
    lv_obj_set_size(match_C2_row, 100, 40);
    lv_label_set_text(match_C2Label, "C2");
    lv_textarea_set_text(match_C2TextBox, "0");


}