String inputString = "";

void setup() {
int i = 2;
Serial.begin(38400);
for(i = 3; i < 12; ++i){pinMode(i,OUTPUT);}
}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()){
      int i;
      int intChar;
      while(Serial.available()){
            char Char = (char)Serial.read();
            intChar = (int)Char;
            inputString+=Char;
        }
       //Serial.println(inputString);
       if(intChar >=48 && intChar <=57){
       
          for(i = (int)inputString[0]; i < 12; ++i){digitalWrite(i,LOW);}
       
          int a = intChar - 48;
          //Serial.println(a);
          int i;
          int j =2;
              for(j=2; j<12;++j){
              digitalWrite(j,LOW);                
                }
          for(i = 11; i >= 12-a; i--){
              
              Serial.println(i);
              digitalWrite(i,HIGH);
            } 
        }
    inputString = "";
    }
    /*
      if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input+
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    if(inputString == "a"){         //in case of 'a' turn the LED on
      digitalWrite(5, HIGH);  
    }else if(inputString == "b"){   //incase of 'b' turn the LED off
      digitalWrite(5, LOW);
    }
    inputString = "";
  }*/
}
