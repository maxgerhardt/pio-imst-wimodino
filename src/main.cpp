#include <Arduino.h>

// Maps to PA17
#define LED LED_BUILTIN

void setup() {
    SerialUSB.begin(115200); // serial monitor connection
    SerialWiMOD.begin(115200); // to WiMOD LoRa module or something
    pinMode(LED, OUTPUT);
}

void loop() {
    SerialUSB.println("Hello, world!");
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}
