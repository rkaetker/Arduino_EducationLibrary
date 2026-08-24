#include <EducationLibrary.h>
#include "meine_Symbole.h"

/* ----- Macht der Arduino einmal am Anfang ----- */ 

void setup() {
  led_matrix_start();  // Diesen Befehl brauchen wir um den Arduino am Anfang einmal zu sagen, dass er die LED-Matrix aktivieren soll.
}

/* --------------------------------------------- */ 



/* ----- Macht der Arduino solange er Strom hat ----- */ 

void loop() {

  zeige(WLAN);    
  warte_sekunden(3);
  zeige(alles_an);
  warte_sekunden(3);
  zeige("Junior UNI Wuppertal <3",100);

}

/* --------------------------------------------- */ 