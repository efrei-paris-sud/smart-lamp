#define TRIGPIN 13
#define ECHOPIN 10
#define LED1 8
#define LED2 9
#define LED3 11
#define LED4 12
#define LED5 7
#define LED6 6
#define LED7 5
#define LED8 4
#define LED9 3
#define LED10 2

long ping() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);
  return pulseIn(ECHOPIN, HIGH)/58;
}

void setup() {
  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  long cm1 = ping();
  if( cm1 < 100){
    delay(100);
    long cm2 = ping();
    long cm = cm2 - cm1;
    if (cm < 0) {
    //if (cm1 < 100 ) {
    
      analogWrite(12, 255);
      analogWrite(11, 0);
      delay(1000);
      analogWrite(9, 255);
      analogWrite(8, 0);
      delay(1000);
      analogWrite(7, 255);
      analogWrite(6, 0);
      delay(1000);
      analogWrite(5, 255);
      analogWrite(4, 0);
      delay(1000);
      analogWrite(3, 255);
      analogWrite(2, 0);
      
      
  }
  else{
    delay(3000);
   analogWrite(3, 0);
      delay(1000);
      analogWrite(5, 0);
      delay(1000);
      analogWrite(7, 0);
      delay(1000);
      analogWrite(9, 0);
      delay(1000);
      analogWrite(12, 0);
  }
  }
  
}