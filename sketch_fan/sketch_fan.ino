const int sensorPin = A0;

const int highTemp = 2;
const int lowTemp = 3;
const int optocouplerPin = 8;

void setup()
{
  pinMode(optocouplerPin, OUTPUT);
  pinMode(highTemp, OUTPUT);
  pinMode(lowTemp, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //Read the sensor value
  int sensorVal = analogRead(sensorPin);
  //Convert reading to voltage
  float voltage = (sensorVal/1024.0) * 5.0;
  //convert millivolts into temperature
  float temperature = (voltage - .5) * 100;
  
  Serial.println(temperature);
  
    if(temperature > 33){
      digitalWrite(lowTemp, LOW);
      digitalWrite(highTemp, HIGH);
      digitalWrite(optocouplerPin, HIGH);
    }else{
      digitalWrite(lowTemp, HIGH);
      digitalWrite(highTemp, LOW);
      digitalWrite(optocouplerPin, LOW);
    }
    
      delay(1000);
                  
}
