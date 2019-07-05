int x=0;

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
}

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(250);
  digitalWrite(_pin,LOW);
  delay(250);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(1000);
  digitalWrite(_pin,LOW);
  delay(250);
}

Morse morse(13);

void setup() {
  Serial.begin(9600);
}

void loop() {
  x=0;
  if (Serial.available()>0)
  {
    x=Serial.read();
  }
  switch(x)
  {
    case 'a':
      morse.dot();
      morse.dash();
      delay(500);
      break;
    case 'b':
      morse.dash();
      morse.dot();
      morse.dot();
      morse.dot();
      delay(500);
      break;
    case 'c':
      morse.dash();
      morse.dot();
      morse.dash();
      morse.dot();
      delay(500);
      break;
    case 'd':
      morse.dash();
      morse.dot();
      morse.dot();
      delay(500);
      break;
    case 'e':
      morse.dot();
      delay(500);
      break;
    case 'f':
      morse.dot();
      morse.dot();
      morse.dash();
      morse.dot();
      delay(500);
      break;
    case 'g':
      morse.dash();
      morse.dash();
      morse.dot();
      delay(500);
      break;
    case 'h':
      morse.dot();
      morse.dot();
      morse.dot();
      morse.dot();
      delay(500);
      break;
    case 'i':
      morse.dot();
      morse.dot();
      delay(500);
      break;
    case 'j':
      morse.dot();     
      morse.dash();
      morse.dash();
      morse.dash();
      delay(500);
      break;
    case 'k':
      morse.dash();
      morse.dot();
      morse.dash();
      delay(500);
      break;
    case 'l':
      morse.dot();
      morse.dash();
      morse.dot();
      morse.dot();
      delay(500);
      break;
    case 'm':
      morse.dash();
      morse.dash();
      delay(500);
      break;
    case 'n':
      morse.dash();
      morse.dot();
      delay(500);
      break;
    case 'o':
      morse.dash();
      morse.dash();
      delay(500);
      break;
    case 'p':
      morse.dot();
      morse.dash();
      morse.dash();
      morse.dot();
      delay(500);
      break;
    case 'q':
      morse.dash();
      morse.dash();
      morse.dot();
      morse.dash();
      delay(500);
      break;
    case 'r':
      morse.dot();
      morse.dash();
      morse.dot();
      delay(500);
      break;
    case 's':
      morse.dot();
      morse.dot();
      morse.dot();
      delay(500);
      break;
    case 't':
      morse.dash();
      delay(500);
      break;
    case 'u':
      morse.dot();
      morse.dot();
      morse.dash();
      delay(500);
      break;
    case 'v':
      morse.dot();
      morse.dot();
      morse.dot();
      morse.dash();
      delay(500);
      break;
    case 'w':
      morse.dot();
      morse.dash();
      morse.dash();
      delay(500);
      break;
    case 'x':
      morse.dash();
      morse.dot();
      morse.dot();
      morse.dash();
      delay(500);
      break;
    case 'y':
      morse.dash();
      morse.dot();
      morse.dash();
      morse.dash();
      delay(500);
      break;
    case 'z':
      morse.dash();
      morse.dash();
      morse.dot();
      morse.dot();
      delay(500);
      break;
    case ' ':
      delay(1000);
      break;
    case '\n':
      delay(2000);
      break;
  }
}
