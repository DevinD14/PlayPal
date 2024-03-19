// Define pins:
#define fsrpin 3
#define fsrpin2 4

#include <FastLED.h>

// Define how many leds
#define NUM_LEDS 30

// Define Data pin and Clock pin
#define DATA_PIN 10
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

// Define variables:
int val; // The current reading from the FSR 1
int val2; // The current reading from the FSR 2


void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Set fsrpins as input:
  pinMode(fsrpin, INPUT_PULLUP);
  pinMode(fsrpin2, INPUT_PULLUP);


  // Initialize FastLED NEOPIXEL leds with GRB ordering
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  // Read the FSR pin and store the output as val:
  val = digitalRead(fsrpin);
  val2 = digitalRead(fsrpin2);

  
  // conditional to communicate signal for output behavior through Serial
  if(val == 0)
  {
    Serial.println("a");
    delay(1);
  }
  else if(val == 1)
  {
    Serial.println("A");
    delay(1);
  }
  if(val2 == 0)
  {
    Serial.println("b");
    delay(1);
  }
  else if(val2 == 1)
  {
    Serial.println("B");
    delay(1);
  }

  // conditional to communicate signal for LED behavior
  if(val == 0)
  {
    for(int i = 0; i < NUM_LEDS; i++) {
      leds[i] = CRGB::Black;
      FastLED.show();
    }
  }
  if(val == 1)
  {
    for(int i = 0; i < NUM_LEDS; i++) {
      leds[i] = CRGB::Red;
      FastLED.show();
    }
  }

  delay(200);
}