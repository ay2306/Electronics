int button = 2;
int pin = 8;
bool state;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(pin,OUTPUT);
  state = false;
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(button);
  // print out the state of the button:
      if(buttonState == 1){
        state = !state;
      }
    
      
    if(state){
      digitalWrite(pin,HIGH);
    }else{
      digitalWrite(pin,LOW);
    }
  Serial.println(buttonState);
  if(buttonState == 1){
    delay(2000);
    }
  delay(1);
}
