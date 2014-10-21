String val;

void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() 
{
  while (Serial.available()){
    delay(10);
    char c = Serial.read();
      if (c == ','){
        break;
      }
      
    val+= c; 
  }
  
  if (val == "switch") {
    if(digitalRead(13) == LOW){
      digitalWrite(13, HIGH);
      delay(100);
      Serial.println(1);
    }else if(digitalRead(13) == HIGH){
      digitalWrite(13, LOW);
      delay(100);
      Serial.println(0);
    }
    val="";
  }  
  
 
}
