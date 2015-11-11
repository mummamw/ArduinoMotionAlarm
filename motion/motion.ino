// Declare Constants
const int sensorPin = 2;          // PIR Sensor is attached to digital pin 2
const int ledPin = 13;            // LED connected to pin 13

// Delay Period for PIR sensor to calibrate
const unsigned int calibrationTime = 60000;

// Setup
void setup() {
  
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  for(unsigned int i=0; i<calibrationTime; i+=500){
   delay(500);
  }
  
}

// Loop
void loop() {
    if (digitalRead(sensorPin) == HIGH) {
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
    
    // Sleep for a second to prevent flooding the serial
    delay(1000);
  } else {
    // Turn the LED off
    digitalWrite(ledPin, LOW);
  }
}
