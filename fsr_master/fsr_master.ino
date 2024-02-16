// Define pins:
#define fsrpin 3

// Define variables:
int val; // The current reading from the FSR

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Set fsrpin as input:
  pinMode(fsrpin, INPUT_PULLUP);
}

void loop() {
  // Read the FSR pin and store the output as val:
  val = digitalRead(fsrpin);

  // Print the fsrreading in the serial monitor:
  Serial.println(val);