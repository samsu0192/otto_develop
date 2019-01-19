void setup(){
  pinMode(13,INPUT);
  Serial.begin(9600);
  }
void loop(){
  int pinStatus=digitalRead(13);
  if (pinStatus==HIGH)
  {
    Serial.println("high");
  }
    if (pinStatus==LOW)
    
  {
    Serial.println("low");
  }
  delay(50);
  }
