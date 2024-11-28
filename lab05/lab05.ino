// C++ code
//
int green=8;
int yellow=9;
int red=10;
int button=2;
void setup()
{
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int buttonState = digitalRead(button);
  if(buttonState == HIGH){
    Pressionado();
  }else{
    NaoPressionado();
  }
}

void Pressionado(){
	digitalWrite(red,HIGH);
    delay(5000);
    digitalWrite(red, LOW);
    delay(500);
  if (digitalRead(button) == HIGH) return;
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
  if (digitalRead(button) == HIGH) return;
    digitalWrite(green, HIGH);
    delay(1000);
    digitalWrite(green, LOW);
    delay(500);
  if (digitalRead(button) == HIGH) return;
}

void NaoPressionado(){
    digitalWrite(green, HIGH);
    delay(1000);
    digitalWrite(green, LOW);
    delay(500);
  if (digitalRead(button) == HIGH) return;
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
  if (digitalRead(button) == HIGH) return;
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(red, LOW);
    delay(500);
  if (digitalRead(button) == HIGH) return;
}