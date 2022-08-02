
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  for(int n =1;n<=5;n++){
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    	
  delay(500);
  } 
  for(int m=1;m<=5;m++){
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(2000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(2000);
  }                            
}
