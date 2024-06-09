/*
    Project name : Microphone sensor module
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-microphone-sound-sensor-module
*/

#define sensorPin A0 // Analog input pin that the sensor is attached to

void setup() 

{
  pinMode(sensorPin, INPUT);
  Serial.begin(9600); // Initialize serial communication at 9600 bps
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.print("Sensor value: ");
  Serial.println(sensorValue); // Print sensor value to serial monitor
  if (sensorValue > 500) {
    Serial.println("Sound detected!"); // Print a message if sound is detected
  }
  delay(100); // Add a small delay to avoid flooding the serial monitor
}
