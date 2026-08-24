#include "lcd.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void lcd_start()
{
    lcd.init();        // LCD initialisieren
    lcd.backlight();   // Hintergrundlicht an
}

void erste_reihe_zeige(const char* text)
{
    lcd.setCursor(0,0);
    lcd.print("                ");
    lcd.setCursor(0,0);
    lcd.print(text);
}

void zweite_reihe_zeige(const char* text)
{
    lcd.setCursor(0,1);
    lcd.print("                ");
    lcd.setCursor(0,1);
    lcd.print(text);
}

void erste_reihe_loesche()
{
    lcd.setCursor(0,0);
    lcd.print("                ");
}

void zweite_reihe_loesche()
{
    lcd.setCursor(0,1);
    lcd.print("                ");
}

void beide_reihen_loeschen()
{
    lcd.clear();
}

void display_an()
{
    lcd.display();   // Inhalt bleibt sichtbar
    lcd.backlight();    // Licht an
}

void display_aus()
{
    lcd.noDisplay();  // Display aus, Inhalt bleibt gespeichert
    lcd.noBacklight();  // Licht aus
}
