#include <Arduino.h>
#include <BlynkSimpleWiFiNINA.h>
#include "gun.h"
#include "config.h"

#define V_SERVO_PIN 5
#define H_SERVO_PIN 6

#define BLYNK_DEBUG // Optional, this enables lots of prints
#define BLYNK_PRINT Serial

Gun gun;

BLYNK_WRITE(V1) {
    int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
    Serial.print("V1 Slider value is: ");
    Serial.println(pinValue);
    gun.move_h(pinValue);
}

BLYNK_WRITE(V2) {
    int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
    Serial.print("V2 Slider value is: ");
    Serial.println(pinValue);
    gun.move_v(pinValue);
}

void setup() {
    gun.init(V_SERVO_PIN, H_SERVO_PIN);
    Serial.begin(9600);
    Serial.write("XDDD");
    Blynk.begin(auth, ssid, pass);

}

void loop() {
    Blynk.run();
}