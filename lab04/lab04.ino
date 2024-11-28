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
  Serial.begin(9600);
}
void loop()
{
  	digitalWrite(green,HIGH);
    delay(1000);
    digitalWrite(green, LOW);
    delay(500);
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(red, LOW);
    delay(500);
}
