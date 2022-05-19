/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>
#include <config.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y,   KC_SCLN,  KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_BSPC,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,    KC_I, KC_O, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_LSFT,     KC_SPC,   MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_ESC,    KC_WBAK,    KC_WSCH,    KC_WFWD,    KC_INS,                         KC_PGUP,    KC_HOME,    KC_UP,    KC_END,    KC_UNDS, XXXXXXX,
  //|---------+-------------+--------------+--------------+---------------+---------|      |--------+--------+--------+--------+--------+--------|
      XXXXXXX, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LGUI), KC_WFAV,         KC_PGDN, KC_LEFT,   KC_DOWN, KC_RGHT, KC_DEL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                             |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_UNDO, KC_CUT, KC_COPY, KC_TAB, KC_PSTE,                      KC_PSCR, KC_BSPC, KC_RSFT, KC_MENU, KC_ENT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  XXXXXXX,     KC_ENT,   MO(3), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_COLN, KC_SCLN,                      KC_EQL, KC_7, KC_8, KC_9, KC_PLUS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_BSLS, KC_PIPE, KC_LCBR, KC_LPRN, KC_LBRC,                      KC_PAST,  KC_4, KC_5, KC_6, KC_MINS,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_MINS, KC_UNDS, KC_RCBR, KC_RPRN, KC_RBRC,                      KC_0, KC_1, KC_2, KC_3, KC_PSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(3),  MO(4),     XXXXXXX, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, KC_MUTE, KC_VOLD, KC_MPLY, KC_VOLU, KC_BRIU,                     KC_F12, KC_F7, KC_F8, KC_F9, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LGUI), KC_BRID,      KC_F11, KC_F4, KC_5, KC_F6, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_MPRV, KC_MSTP, KC_MNXT, XXXXXXX,                      KC_F10, KC_F1, KC_F2, KC_F3, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, XXXXXXX,                  UC(0x260), KC_AMPR, KC_GRV, KC_TILD, UC(0x00B1), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,                     UC(0x20A9), KC_DLR, KC_PERC, KC_CIRC, KC_UNDS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_BTN4, KC_BTN3, KC_BTN5, XXXXXXX,                  UC(0x00B0), KC_EXLM, KC_AT, KC_HASH, UC(0x00F7), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, XXXXXXX,  _______,     XXXXXXX, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

#define _MA 0
#define _FN 1
int timer = 0;
char wpm_text[5];
int x = 31;
int currwpm = 0;
int vert_count = 0; 

//=============  USER CONFIG PARAMS  ===============
float max_wpm = 110.0f; //WPM value at the top of the graph window
int graph_refresh_interval = 80; //in milliseconds
int graph_area_fill_interval = 3; //determines how dense the horizontal lines under the graph line are; lower = more dense
int vert_interval = 3; //determines frequency of vertical lines under the graph line
bool vert_line = false; //determines whether to draw vertical lines
int graph_line_thickness = 3; //determines thickness of graph line in pixels
//=============  END USER PARAMS  ===============

enum custom_keycodes {
  KC_CUST = SAFE_RANGE,
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_EXTEND 2
#define L_SYMBOLS_1 4
#define L_FUNCTION 8
#define L_SYMBOlS_2 10

void oled_wpm_animation(void) {
	
	//get current WPM value
	currwpm = get_current_wpm();
	
	//check if it's been long enough before refreshing graph
	if(timer_elapsed(timer) > graph_refresh_interval){
	
		// main calculation to plot graph line
		x = 32 - ((currwpm / max_wpm) * 32);
		
		//first draw actual value line
		for(int i = 0; i <= graph_line_thickness - 1; i++){
			oled_write_pixel(1, x + i, true);
		}
		
		
		//then fill in area below the value line
		if(vert_line){
			if(vert_count == vert_interval){
				vert_count = 0;
				while(x <= 32){
					oled_write_pixel(1, x, true);
					x++;
				}
			} else {
				for(int i = 32; i > x; i--){
					if(i % graph_area_fill_interval == 0){
						oled_write_pixel(1, i, true);
					}
				}
				vert_count++;
			}
		} else {
			for(int i = 32; i > x; i--){
				if(i % graph_area_fill_interval == 0){
					oled_write_pixel(1, i, true);
				}
			}
		}
		
		//then move the entire graph one pixel to the right
		oled_pan(false); 
		
		//refresh the timer for the next iteration
		timer = timer_read();
		
	}
	
	//format current WPM value into a printable string
	sprintf(wpm_text,"%i", currwpm);
	
	//formatting for triple digit WPM vs double digits, then print WPM readout
	if(currwpm >= 100){
		oled_set_cursor(14, 3);
		oled_write("WPM: ", false);
		oled_set_cursor(18, 3);
		oled_write(wpm_text, false);
	} else if (currwpm >= 10){
		oled_set_cursor(15, 3);
		oled_write("WPM: ", false);
		oled_set_cursor(19, 3);
		oled_write(wpm_text, false);
	} else if (currwpm > 0) {
		oled_set_cursor(16, 3);
		oled_write("WPM: ", false);
		oled_set_cursor(20, 3);
		oled_write(wpm_text, false);		
	}
	
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_wpm_animation();
    } else {
        oled_wpm_animation();
    }
    return false;
}
#endif // OLED_ENABLE
