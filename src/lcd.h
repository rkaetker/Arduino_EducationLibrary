#ifndef LCD_H
#define LCD_H

#include <LiquidCrystal_I2C.h>

extern LiquidCrystal_I2C lcd;

void lcd_start();

void erste_reihe_zeige(const char* text);
void zweite_reihe_zeige(const char* text);

void erste_reihe_loesche();
void zweite_reihe_loesche();

void beide_reihen_loeschen();

void display_an();
void display_aus();

#endif
