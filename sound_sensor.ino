const int soundSensorPin = A0;  // Sound sensor connected to analog pin A0
const int ledPin = D0;          // LED connected to digital pin D0


const int thresholdDB = 1.00;     // Set the sound level threshold in dB


void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}


void loop() {
  // Read the analog value from the sound sensor
  int sensorValue = analogRead(soundSensorPin);


  // Convert the analog value to dB (You need to calibrate this part)
  float soundLevelDB = analogToDB(sensorValue);


  // Print the sound level in dB to the serial monitor
  Serial.print("Sound Level (dB): ");
  Serial.println(soundLevelDB);


  // Check if the sound level exceeds the threshold
  if (soundLevelDB > thresholdDB) {
    digitalWrite(ledPin, HIGH);  // Turn on the LED
 Serial.println("Sound Level detected ");   
delay(10000);  
  } 
  else {
    digitalWrite(ledPin, LOW);   // Turn off the LED
  }


  delay(10000);  // Delay for 1 second (adjust as needed)
}
//float analogToDB(int analogValue) {
  // Replace the following with your actual calibration logic
  // Example: If analogValue 0-1023 maps to 40-100 dB
  //float dB = map(analogValue, 0, 1023, 40, 100);
  //return dB;
//}
// Function to convert analog value to dB (you need to calibrate this)
float analogToDB(int analogValue) {
  // Implement your calibration logic here
  // This is a placeholder, you should replace it with your actual calibration code
  float dB = map(analogValue, 0, 1023, 0, 100); // Replace with your calibration logic
  return dB;
}


