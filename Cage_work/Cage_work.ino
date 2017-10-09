#define LED 7
String inputString = "";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
      while(Serial.available()){
          char inChar = (char)Serial.read();
          inputString+=inChar;
        }
        if(inputString == "a"){
            digitalWrite(LED,HIGH);
          }
         else if(inputString == "b"){
            digitalWrite(LED,LOW);
          }
        inputString="";
    }
}
