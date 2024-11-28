// C++ code
//
int porta_rele1 = 12;
int estadorele1 = 1;

void setup() {
  pinMode(porta_rele1, OUTPUT);  
  digitalWrite(porta_rele1, HIGH);
}

void loop() {
  int valorrecebido = analogRead(A0);
  
   if(valorrecebido > 0){
  	digitalWrite(12, HIGH);  
   }else{
   	digitalWrite(12, LOW);
   }
 
}
