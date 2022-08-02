void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
 if(Serial.available()>0){
  int input=Serial.read();
  if(input=='1'){
  digitalWrite(13,HIGH);
  Serial.println("high");
  }
  if(input=='0'){
  digitalWrite(13,LOW);
  Serial.println("low");
  }
 }
}
