void stop()
{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}
void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Back
  int Back=0,Straight=0,Left=0,right=1,x;
  if(Serial.available()>0)
  {
    Serial.print("hai");
    x=Serial.read();
    Serial.println(x);
  if(x== 52){
  digitalWrite(8,HIGH);// back
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(100);
  stop();
  }
  if(x == 49)
  {
  digitalWrite(8,LOW);//straight
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(100);
  stop();
  }
  if(x==50)
  {
  digitalWrite(8,LOW);//left
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(100);
  stop();
  }
  if(x == 51)
  {
    digitalWrite(8,HIGH);//right
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(100);
  stop();
  
  }
  if(x==57)
  {
    digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  }
  }
}
