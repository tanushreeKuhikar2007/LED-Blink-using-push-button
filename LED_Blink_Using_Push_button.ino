#define led 2
#define button 8

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(led,INPUT);

}

void loop() {
 bool  x = digitalRead(button);
 if(x==1){
  digitalWrite(led,HIGH);

 }
 else{
  digitalWrite(led,LOW);
 }

}