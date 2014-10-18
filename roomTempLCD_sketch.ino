
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int sensorPin = A0;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {

  int sensorVal = analogRead(sensorPin);
  Serial.print("sensor Value: ");
  Serial.print(sensorVal); 

  float voltage = (sensorVal/1024.0) * 5.0;

  Serial.print(", Volts: ");
  Serial.print(voltage);

  // convert the voltage to temperature in degrees C
  // the sensor changes 10 mV per degree
  // the datasheet says there's a 500 mV offset
  // ((volatge - 500mV) times 100)
  Serial.print(", degrees C: "); 
  float temperature = (voltage - .5) * 100;
  
  Serial.println(temperature);
  
  lcd.print("Room Temp: ");
  lcd.print(temperature);
  
  delay(1000);
  lcd.clear();
}
