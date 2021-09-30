#include <BleKeyboard.h>

BleKeyboard bleKeyboard("Kawet gamepad", "Poupou Industries", 100);

const int GreenButton = 23;
const int GreenLed = 22;

const int WhiteButton = 19;
const int WhiteLed = 18;

const int BlueButton = 17;
const int BlueLed = 16;

const int YellowButton = 2;
const int YellowLed = 0;


void setup()
{
  pinMode(GreenButton, INPUT_PULLUP);
  pinMode(GreenLed, OUTPUT);
  
  pinMode(WhiteButton, INPUT_PULLUP);
  pinMode(WhiteLed, OUTPUT);
  
  pinMode(BlueButton, INPUT_PULLUP);
  pinMode(BlueLed, OUTPUT);
  
  pinMode(YellowButton, INPUT_PULLUP);
  pinMode(YellowLed, OUTPUT);
  
  bleKeyboard.begin();
}

void loop()
{
  if (digitalRead(GreenButton) == LOW)
  {
    digitalWrite(GreenLed, HIGH);
    bleKeyboard.write('e');
    delay(1000);
    digitalWrite(GreenLed, LOW);
  }
  
  if (digitalRead(WhiteButton) == LOW)
  {
    digitalWrite(WhiteLed, HIGH);
    bleKeyboard.write('r');
    delay(1000);
    digitalWrite(WhiteLed, LOW);  
  }
  
  if (digitalRead(BlueButton) == LOW)
  {
    digitalWrite(BlueLed, HIGH);
    bleKeyboard.write('w');
    delay(1000);
    digitalWrite(BlueLed, LOW);
  }
  
  if (digitalRead(YellowButton) == LOW)
  {
    digitalWrite(YellowLed, HIGH);
    bleKeyboard.write('q');
    delay(1000);
    digitalWrite(YellowLed, LOW);
  }
  
}
