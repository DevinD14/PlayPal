// Define pins:
#define led 4

// Define variables:
int val; // The reading from the serial

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Set led as output:
  pinMode(led, OUTPUT);
}

void loop() {
  // Checks if there is an input available in the Serial:
  if(Serial.available())
  {
    // Read the FSR pin and store the output as val:
    val = Serial.read();
    // Checks if the digital pin is a 0 or 1 to turn the LED off or on respectively:
    if(val == 48)
    {
      digitalWrite(led, LOW);
    }
    else if(val == 49)
    {
      digitalWrite(led, HIGH);
    }
  }
}