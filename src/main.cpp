#include <Arduino.h>
#include <FastLED.h>
#define NUM_LEDS 5
#define DATA_PIN 0

CRGB leds[NUM_LEDS];

void setup() {
	// initialize digital pin LED_BUILTIN as an output.
	pinMode(LED_BUILTIN, OUTPUT);
	FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
        for(int dot = 0; dot < NUM_LEDS; dot++) { 
            leds[dot] = CRGB::BlueViolet;
            FastLED.show();
            // clear this led for the next time around the loop
            leds[dot] = CRGB::Black;
            delay(100);
        }
    }