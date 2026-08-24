#include "led_matrix.h"
#include "led_matrix_pictures.h"
#include <Arduino.h>

ArduinoLEDMatrix matrix;

// ----------------------------------------------------
// Function to start the matrix
// ----------------------------------------------------

void led_matrix_start()
{
    matrix.begin();
}

// ----------------------------------------------------
// Array to call the symbols
// ----------------------------------------------------

byte (*symbolArray[AMOUNT])[12] =
{
    smiley,heart,house,bulb,star,wlan,lock,robot,pacman,alien
};

// ----------------------------------------------------
// Function to show one of my symbols
// ----------------------------------------------------

void zeige(SYMBOLS symbol)
{
    matrix.renderBitmap(symbolArray[symbol], 8, 12);
}

// ----------------------------------------------------
// Function to load one of the pictures of the kids
// ----------------------------------------------------

void zeige(byte bild[8][12])
{
    matrix.renderBitmap(bild, 8, 12);
}

// ----------------------------------------------------
// Function to load text
// ----------------------------------------------------

void zeige(char* text, int speed) {
    if (text == nullptr) return;

    int textLen = strlen(text);
    int textWidth = textLen * 6; // 5 Pixel Breite + 1 Pixel Abstand

    for (int x = 12; x >= -textWidth; x--) {
        matrix.beginDraw();
        matrix.stroke(0xFF, 0xFF, 0xFF);     // Farbe Weiß/An
        matrix.textFont(Font_5x7);          // Schriftart festlegen
        matrix.beginText(x, 0, 0xFF, 0xFF, 0xFF); // Text starten
        matrix.print(text);
        matrix.endText();
        matrix.endDraw();                   // Frame anzeigen

        delay(speed);
    }
}

// ----------------------------------------------------
// Clear matrix
// ----------------------------------------------------

void loeschen()
{
    matrix.clear();
}
