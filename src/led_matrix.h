#ifndef LED_MATRIX_H
#define LED_MATRIX_H

#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

// ----------------------------------------------------
// Here we got some seettings and further definitions
// ----------------------------------------------------

enum SYMBOLS {
    SMILEY,
    HERZ,
    HAUS,
    GLUEHBIRNE,
    STERN,
    WLAN,
    SCHLOSS,
    ROBOTER,
    PACMAN,
    ALIEN,
    AMOUNT
};

extern ArduinoLEDMatrix matrix;

// ----------------------------------------------------
// Here we find the functionalities
// ----------------------------------------------------

void led_matrix_start();

void zeige(SYMBOLS symbol);

void zeige(byte bild[8][12]);

void zeige(char* text, int speed);

void loeschen();

#endif
