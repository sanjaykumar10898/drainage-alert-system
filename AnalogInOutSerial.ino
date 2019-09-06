#include <SoftwareSerial.h>

SoftwareSerial BTserial(10, 11); // RX | TX

int sensorPin = A0;
const int analogInPin = A0;  
const int analogOutPin = 9; 

int sensorValue = 0;        
int outputValue = 0;        


void setup() {
 
  Serial.begin(9600);
  BTserial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  sensorValue = analogRead(sensorPin);


  outputValue = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(analogOutPin, outputValue);

  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  BTserial.print("1234");

BTserial.print(",");

BTserial.print("1234.0");

BTserial.print(",");

BTserial.print("1234 hPa");

BTserial.print(",");

BTserial.print("500 ml/s");

BTserial.print(",");

BTserial.print(sensorValue);

BTserial.print("hello");



delay(2000);

  delay(2000);
}
