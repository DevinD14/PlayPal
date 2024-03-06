// Define pins:
#define fsrpin 3
#define fsrpin2 4
#define fsrpin3 5
#define fsrpin4 6
#define fsrpin5 7
#define fsrpin6 8
#define fsrpin7 9

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
int val3; // The current reading from the FSR 3
int val4; // The current reading from the FSR 4
int val5; // The current reading from the FSR 5
int val6; // The current reading from the FSR 6
int val7; // The current reading from the FSR 7

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Set fsrpins as input:
  pinMode(fsrpin, INPUT_PULLUP);
  pinMode(fsrpin2, INPUT_PULLUP);
  pinMode(fsrpin3, INPUT_PULLUP);
  pinMode(fsrpin4, INPUT_PULLUP);
  pinMode(fsrpin5, INPUT_PULLUP);
  pinMode(fsrpin6, INPUT_PULLUP);
  pinMode(fsrpin7, INPUT_PULLUP);

  // Initialize FastLED NEOPIXEL leds with GRB ordering
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  // Read the FSR pin and store the output as val:
  val = digitalRead(fsrpin);
  val2 = digitalRead(fsrpin2);
  val3 = digitalRead(fsrpin3);
  val4 = digitalRead(fsrpin4);
  val5 = digitalRead(fsrpin5);
  val6 = digitalRead(fsrpin6);
  val7 = digitalRead(fsrpin7);
  
  // conditional to communicate signal for output behavior through Serial
  if(val == 0)
  {
    Serial.println("a");
  }
  else if(val == 1)
  {
    Serial.println("A");
  }
  if(val2 == 0)
  {
    Serial.println("b");
  }
  else if(val2 == 1)
  {
    Serial.println("B");
  }

  // conditional to communicate signal for LED behavior
  if(val == 0)
  {
    leds[0] = CRGB::Blue;
    leds[1] = CRGB::Blue;
    leds[2] = CRGB::Blue;
    leds[3] = CRGB::Blue;
    leds[4] = CRGB::Blue;
    leds[5] = CRGB::Blue;
    leds[6] = CRGB::Blue; 
    leds[7] = CRGB::Blue;
    leds[8] = CRGB::Blue;
    leds[9] = CRGB::Blue;
    leds[10] = CRGB::Blue;
    leds[11] = CRGB::Blue;
    leds[12] = CRGB::Blue; 
    leds[13] = CRGB::Blue;
    leds[14] = CRGB::Blue;
    leds[15] = CRGB::Blue;
    leds[16] = CRGB::Blue;
    leds[17] = CRGB::Blue;
    leds[18] = CRGB::Blue;
    leds[19] = CRGB::Blue;  
    leds[20] = CRGB::Blue;
    leds[21] = CRGB::Blue;
    leds[22] = CRGB::Blue;
    leds[23] = CRGB::Blue;
    leds[24] = CRGB::Blue;
    leds[25] = CRGB::Blue; 
    leds[26] = CRGB::Blue;
    leds[27] = CRGB::Blue;
    leds[28] = CRGB::Blue;
    leds[29] = CRGB::Blue;
    leds[30] = CRGB::Blue;
    FastLED.show();
  }
  else if(val == 1)
  {
    leds[0] = CRGB::Red;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Red;
    leds[4] = CRGB::Red;
    leds[5] = CRGB::Red;
    leds[6] = CRGB::Red; 
    leds[7] = CRGB::Red;
    leds[8] = CRGB::Red;
    leds[9] = CRGB::Red;
    leds[10] = CRGB::Red;
    leds[11] = CRGB::Red;
    leds[12] = CRGB::Red;  
    leds[13] = CRGB::Red;
    leds[14] = CRGB::Red;
    leds[15] = CRGB::Red;
    leds[16] = CRGB::Red;
    leds[17] = CRGB::Red;
    leds[18] = CRGB::Red; 
    leds[19] = CRGB::Red;  
    leds[20] = CRGB::Red;
    leds[21] = CRGB::Red;
    leds[22] = CRGB::Red;
    leds[23] = CRGB::Red;
    leds[24] = CRGB::Red;
    leds[25] = CRGB::Red;  
    leds[26] = CRGB::Red;
    leds[27] = CRGB::Red;
    leds[28] = CRGB::Red;
    leds[29] = CRGB::Red;
    leds[30] = CRGB::Red;
    FastLED.show();
  }

  delay(500);
}

  // Print the fsrreading in the serial monitor:
  //Serial.println(val);