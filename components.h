//
// Created by user on 11/18/22.
//

#ifndef A1_COMPONENTS_H
#define A1_COMPONENTS_H

#include "src/layouts/grid/lv_grid.h"
#include "src/layouts/flex/lv_flex.h"
#include "src/core/lv_disp.h"
#include "src/core/lv_obj.h"
#include "src/widgets/label/lv_label.h"
#include "src/widgets/textarea/lv_textarea.h"


// grid obj
lv_obj_t *grid;
// flex wrappers
lv_obj_t *wrapper1;
lv_obj_t *wrapper2;
/*************
 * Labels & Text Display * Left Side
 *************/
lv_obj_t *freq_row;
lv_obj_t *freq_label;
lv_obj_t *freq_text_box;
lv_obj_t *VSWR_row;
lv_obj_t *VSWR_label;
lv_obj_t *VSWR_textbox;
lv_obj_t *refl_coeff_amp_row;
lv_obj_t *refl_coeff_ampLabel;
lv_obj_t *refl_coeff_ampTextBox;
lv_obj_t *refl_coeff_phase_row;
lv_obj_t *refl_coeff_phaseLabel;
lv_obj_t *refl_coeff_phaseTextBox;
lv_obj_t *incid_pwr_row;
lv_obj_t *incid_pwrLabel;
lv_obj_t *incid_pwrTextBox;
lv_obj_t *incid_pwr_phase_row;
lv_obj_t *incid_pwr_phaseLabel;
lv_obj_t *incid_pwr_phaseTextBox;
lv_obj_t *refl_power_row;
lv_obj_t *refl_pwrLabel;
lv_obj_t *refl_pwrTextBox;
lv_obj_t *refl_pwr_phase_row;
lv_obj_t *refl_pwr_phaseLabel;
lv_obj_t *refl_pwr_phaseTextBox;
/*************
 * Labels & Text Display * Right Sidef
 *************/
lv_obj_t *match_ct_type_row;
lv_obj_t *match_ct_typeLabel;
lv_obj_t *match_ct_typeTextBox;
lv_obj_t *match_L_row;
lv_obj_t *match_LLabel;
lv_obj_t *match_LTextBox;
lv_obj_t *match_C1_row;
lv_obj_t *match_C1Label;
lv_obj_t *match_C1TextBox;
lv_obj_t *match_C2_row;
lv_obj_t *match_C2Label;
lv_obj_t *match_C2TextBox;


/*************
 * Functions *
 *************/
void create_layout();


#endif //A1_COMPONENTS_H











