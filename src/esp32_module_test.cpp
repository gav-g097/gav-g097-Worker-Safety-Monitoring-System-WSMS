//This is a serial monitor test for confirming the working of the ESP32 module
#include <Arduino.h>
void setup() {
  Serial.begin(9600);
  printf("This is a serial test for ESP32\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  printf("Hello from ESP32\n");
  delay(1000);
}
