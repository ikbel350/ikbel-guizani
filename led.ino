int ledPin = 13;   // LED sur la pin 13
int btnPin = 7;     // bouton poussoir sur la pin 7

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT);
}

void loop()
{
  int val = digitalRead(btnPin);
  if(val=1){
  digitalWrite(ledPin, 0);    // allume la LED en fonction de l'état du bouton
    
  }     // lit l'état du bouton
}