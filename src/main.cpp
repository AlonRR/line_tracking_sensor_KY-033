#include <Arduino.h>

#define LINE_TRACKER 17

bool val = false;

void setup()
{
    Serial.begin(115200);
    pinMode(LINE_TRACKER, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    val = digitalRead(LINE_TRACKER);
    if (val == HIGH)
    {
        digitalWrite(LED_BUILTIN, LOW);
        Serial.println("Line detected");
    }
    else
    {
        Serial.println("Line NOT detected");
    }
    delay(100);
}
