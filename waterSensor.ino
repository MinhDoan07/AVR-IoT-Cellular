/*
    The following code implements the EmojiCube demo and demonstrates
    the communication between two AVR-IoT Cellular-Mini boards.
    This code has to be uploaded to the first board (Node 1).
 */

#include <Arduino.h>
#include <log.h>

// GPIO pins for LEDs (D9, D6, D5)
#define waterSensor PIN_PD0
#define waterLevel PIN_PD5
void setup() {
    Serial3.begin(115201);
    Log.setLogLevel(LogLevel::DEBUG);
    pinMode(waterSensor, INPUT);
    pinMode(waterLevel, INPUT);
}

void loop() {      
    int y = analogRead(waterLevel);
    Serial3.println(y);
    delay(1000);
}
