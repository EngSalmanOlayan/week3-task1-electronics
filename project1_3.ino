// C++ code
//
int buttonState = 0;
int potensio = 0;
int savedata = 0;
int pinA = 7;
int pinB = 8;
int pwm = 9;

void setup()
{
  pinMode(2, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop()
{
  buttonState = digitalRead(2);
  if (buttonState == LOW) {
    Right();
  }
  else{
    Left();
  }
  delay(10);
}
void Right()
{
  digitalWrite(pinA , LOW);
  digitalWrite(pinB , HIGH);
  savedata = analogRead(potensio);
  analogWrite(pwm , savedata);
  delay(15); 
}
void Left()
{
  digitalWrite(pinA , HIGH);
  digitalWrite(pinB , LOW);
  savedata = analogRead(potensio);
  analogWrite(pwm , savedata);
  delay(15); 
}