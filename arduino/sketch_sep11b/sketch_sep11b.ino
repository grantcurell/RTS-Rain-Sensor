// Define the pin for the LED output (Digital Pin 6) and the analog sensor input (Analog Pin A0)
#define ledPin 6
#define sensorPin A0

void setup() {
  // Initialize serial communication at a baud rate of 9600 for debugging and monitoring
  Serial.begin(9600);
  
  // Configure ledPin as an output
  pinMode(ledPin, OUTPUT);
  
  // Turn off the LED initially by setting the pin LOW
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Print a message to the serial monitor
  Serial.print("Analog output: ");
  
  // Read the sensor value and print it to the serial monitor
  Serial.println(readSensor());
  
  // Delay for 500 milliseconds before the next reading
  delay(500);
}

// This function reads the analog sensor value and controls the LED brightness
int readSensor() {
  // Read the analog value from the sensor (0 to 1023)
  int sensorValue = analogRead(sensorPin);
  
  // Map the 10-bit sensor value to an 8-bit value (0 to 255)
  int outputValue = map(sensorValue, 0, 1023, 255, 0);
  
  // Generate a PWM signal on the LED pin to control brightness
  analogWrite(ledPin, outputValue);
  
  // Return the 8-bit analog rain value (LED brightness)
  return outputValue;
}
