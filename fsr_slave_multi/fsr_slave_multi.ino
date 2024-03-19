// Define pins:
#define led 4
#define led2 5

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Set led pins as output:
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // Check if there is serial data available to read:
  if (Serial.available() > 0) {
    // Read the incoming byte:
    int val = Serial.read();

    // Debugging: Print the received value to the serial monitor
    Serial.println(val);

    // Determine the action based on the received character:
    switch (val) {
      case 97: // ASCII 97
        digitalWrite(led, LOW);
        break;
      case 65: // ASCII 65
        digitalWrite(led, HIGH);
        break;
      case 98: // ASCII 98
        digitalWrite(led2, LOW);
        break;
      case 66: // ASCII 66
        digitalWrite(led2, HIGH);
        break;
    }
  }
}