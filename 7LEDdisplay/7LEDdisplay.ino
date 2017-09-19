int top  = 2;
int upper_right = 3;
int middle = 4;
int bottom_right = 5;
int bottom = 6;
int upper_left = 7;
int bottom_left = 8;

void setup(){
  pinMode(top,OUTPUT);
  pinMode(upper_left,OUTPUT);
  pinMode(upper_right,OUTPUT);
  pinMode(middle,OUTPUT);
  pinMode(bottom,OUTPUT);
  pinMode(bottom_left,OUTPUT);
  pinMode(bottom_right,OUTPUT);
}
int i = 0;
void loop(){
  char a[] = "1234567890";
  while(a[i]!='\0'){
    display(a[i]);
    ++i;
  }
}

void display(char a){
  if(a == '1'){
    digitalWrite(upper_right,HIGH);
    digitalWrite(bottom_right,HIGH);
  }
  if(a == '2'){
    digitalWrite(top,HIGH);
    digitalWrite(upper_right,HIGH);
    digitalWrite(middle,HIGH);
    digitalWrite(bottom_left,HIGH);
    digitalWrite(bottom,HIGH);
  }if(a == '3'){
    digitalWrite(top,HIGH);
    digitalWrite(upper_right,HIGH);
    digitalWrite(middle,HIGH);
    digitalWrite(bottom_right,HIGH);
    digitalWrite(bottom,HIGH);
  }if(a == '4'){
    digitalWrite(upper_left,HIGH);
    digitalWrite(middle,HIGH);
    digitalWrite(upper_right,HIGH);
    digitalWrite(bottom_right,HIGH);
  }if(a == '5'){
    digitalWrite(top,HIGH);
    digitalWrite(upper_left,HIGH);
    digitalWrite(middle,HIGH);
    digitalWrite(bottom_right,HIGH);
    digitalWrite(bottom,HIGH);
  }if(a == '6'){
    digitalWrite(top,HIGH);
    digitalWrite(upper_left,HIGH);
    digitalWrite(bottom_left,HIGH);
    digitalWrite(bottom_right,HIGH);
    digitalWrite(bottom,HIGH);
    digitalWrite(middle,HIGH);
  }if(a == '7'){
    digitalWrite(top,HIGH);
    digitalWrite(upper_right,HIGH);
    digitalWrite(bottom_right,HIGH);
  }if(a == '8'){
    digitalWrite(top,HIGH);
    digitalWrite(upper_right,HIGH);
    digitalWrite(upper_left,HIGH);
    digitalWrite(middle,HIGH);
    digitalWrite(bottom_right,HIGH);
    digitalWrite(bottom_left,HIGH);
    digitalWrite(bottom,HIGH);
  }if(a == '9'){
    digitalWrite(top,HIGH);
    digitalWrite(upper_right,HIGH);
    digitalWrite(upper_left,HIGH);
    digitalWrite(middle,HIGH);
    digitalWrite(bottom_right,HIGH);
    digitalWrite(bottom,HIGH);
  }if(a == '0'){
    digitalWrite(top,HIGH);
    digitalWrite(upper_right,HIGH);
    digitalWrite(upper_left,HIGH);
    digitalWrite(bottom_left,HIGH);
    digitalWrite(bottom_right,HIGH);
    digitalWrite(bottom,HIGH);
  }
  delay(2500);
  digitalWrite(top,LOW);
  digitalWrite(upper_right,LOW);
  digitalWrite(upper_left,LOW);
  digitalWrite(middle,LOW);
  digitalWrite(bottom_right,LOW);
  digitalWrite(bottom_left,LOW);
  digitalWrite(bottom,LOW);
}
