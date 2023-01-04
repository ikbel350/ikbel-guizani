#include <SoftwareSerial.h>
// GPS SoftwareSerial
// Rx: pin 10 (à connecter au Tx du GPS)
// Tx: pin 11 (à connecter au Rx du GPS)
SoftwareSerial gpsSerial(10, 11);
 
void setup() {
    Serial.begin(9600);
    gpsSerial.begin(9600);
}
 
void loop() {
 
    // Si le GPS a envoyé quelque chose
    if (gpsSerial.available()) {
        // On renvoie ce quelque chose sur le PC
        Serial.write(gpsSerial.read());
    }
 
    // Si le PC a envoyé quelque chose
    if (Serial.available()) {
        // On renvoie ce quelque chose sur le GPS
        gpsSerial.write(Serial.read());
    }
 
}
