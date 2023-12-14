void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  // Send G-code command to move X-axis by 10 units
  Serial.println("G21 G91"); // Set units to mm and use relative positioning
  Serial.println("G1 X10 F100"); // Move X-axis by 10 mm at a feed rate of 100 mm/min

  delay(1000); // Wait for a second before sending the next command
}
