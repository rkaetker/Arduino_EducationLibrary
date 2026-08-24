#include <EducationLibrary.h>


/* ----- Macht der Arduino einmal am Anfang ----- */ 

void setup() {
  lcd_start();  // Diesen Befehl brauchen wir um den Arduino am Anfang einmal zu sagen, dass das was wir angeschlossen haben ein LCD-Display ist.
}

/* --------------------------------------------- */ 



/* ----- Macht der Arduino solange er Strom hat ----- */ 

void loop() {

  erste_reihe_zeige("Hello World !"); 
  zweite_reihe_zeige("Hallo Welt !");
  warte_sekunden(5);
  beide_reihen_loeschen();
  warte_sekunden(5);

}

/* --------------------------------------------- */ 