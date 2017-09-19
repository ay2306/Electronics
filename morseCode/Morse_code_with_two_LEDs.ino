int redLED = 12;
int greenLED = 2;
char string[] = "hello";
void dash(int);
void cblink(int);
void morseCode(char);
int i = 0;
int len = strlen(string);

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(i<len){
    morseCode(string[i]);
    ++i;
  }
}

void dash(int k){
    int j =0;
  for(j = 0; j < k; ++j){
    digitalWrite(greenLED, HIGH);
    delay(900);
    digitalWrite(greenLED, LOW);
    delay(200);
    }
}

void cblink(int k){
  int j =0;
  for(j = 0; j < k; ++j){
    digitalWrite(redLED, HIGH);
    delay(300);
    digitalWrite(redLED, LOW);
    delay(200);
    }
}

void morseCode(char a){
int k = 0;
    if(a == 'A' || a== 'a'){
        cblink(1);
        dash(1);
        delay(2900);
      }
    if(a == 'B' || a== 'b'){
        dash(1);
        cblink(3);
        delay(2900);
      }
    if(a == 'C' || a== 'c'){
        dash(1);
        cblink(1);
        dash(1);
        cblink(1);
        delay(2900);
      }
    if(a == 'D' || a== 'd'){
        dash(1);
        cblink(2);
        delay(2900);
      }
    if(a == 'E' || a== 'e'){
        cblink(1);
        delay(2900);
      }
    if(a == 'F' || a== 'f'){
        cblink(2);
        dash(1);
        cblink(1);
        delay(2900);
      }
    if(a == 'G' || a== 'g'){
        dash(2);
        cblink(1);
        delay(2900);
      }
    if(a == 'H' || a== 'h'){
        cblink(4);
        delay(2900);
      }
    if(a == 'I' || a== 'i'){
        cblink(2);
        delay(2900);
      }
    if(a == 'J' || a== 'j'){
        cblink(1);
        dash(3);
        delay(2900);
      }
    if(a == 'K' || a== 'k'){
        dash(1);
        cblink(1);
        dash(1);
        delay(2900);
      }
    if(a == 'L' || a== 'l'){
        cblink(1);
        dash(1);
        cblink(2);
        delay(2900);
      }
    if(a == 'M' || a== 'm'){
        dash(2);
        delay(2900);
      }
    if(a == 'N' || a== 'n'){
        dash(1);
        cblink(1);
        delay(2900);
      }
    if(a == 'O' || a== 'o'){
        dash(3);
        delay(2900);
      }
    if(a == 'P' || a== 'p'){
        cblink(1);
        dash(2);
        cblink(1);
        delay(2900);
      }
    if(a == 'Q' || a== 'q'){
        dash(2);
        cblink(1);
        dash(1);
        delay(2900);
      }
    if(a == 'R' || a== 'r'){
        cblink(1);
        dash(1);
        cblink(1);
        delay(2900);
      }
    if(a == 'S' || a== 's'){
        cblink(3);
        delay(2900);
      }
    if(a == 'T' || a== 't'){
        dash(1);
        delay(2900);
      }
    if(a == 'U' || a== 'u'){
        cblink(2);
        dash(1);
        delay(2900);
      }
    if(a == 'V' || a== 'v'){
        cblink(3);
        dash(1);
        delay(2900);
      }
    if(a == 'W' || a== 'w'){
        cblink(1);
        dash(2);
        delay(2900);
      }
    if(a == 'X' || a== 'x'){
        dash(1);
        cblink(2);
        dash(1);
        delay(2900);
      }
    if(a == 'Y' || a== 'y'){
        dash(1);
        cblink(1);
        dash(2);
        delay(2900);
      }
    if(a == 'Z' || a== 'z'){
        dash(2);
        cblink(2);
        delay(2900);
      }
}
