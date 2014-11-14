int redLed = 4;
int yellowLed = 3;
int greenLed = 2;
String light;

void setup(){
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop(){
  while (Serial.available()){
        char c = Serial.read();
        Serial.print("I received: ");
        Serial.println(c);
        if (c == ','){
            break;
        }

        light+= c;


}
          
  
  if(light == "red"){
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);
    delay(10000);
  }else if(light == "yellow"){
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    delay(10000);
  }else if(light == "green"){
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, LOW);
    delay(10000);
  }else{
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);
    delay(1000);
  }
  light ="";
   
}
