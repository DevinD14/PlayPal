// Define pins:
#define fsrpin 3
#define fsrpin2 4

// Define variables:
int val; // The current reading from the FSR
int val2; // The current reading from the FSR

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Set fsrpin as input:
  pinMode(fsrpin, INPUT_PULLUP);
  pinMode(fsrpin2, INPUT_PULLUP);
}

void loop() {
  // Read the FSR pin and store the output as val:
  val = digitalRead(fsrpin);
  val2 = digitalRead(fsrpin2);
  
  if val == 1:
    Serial.println("A");
  else if val2 == 1:
    Serial.println("B");

  // Print the fsrreading in the serial monitor:
  //Serial.println(val);