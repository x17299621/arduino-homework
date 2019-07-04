int income=0;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);  
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()>0)
  {
    income=Serial.read()-'0';
  }
  digitalWrite(8,LOW);
  switch(income)
  {
    case 0:
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
    case 1:
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      break;
    case 2:
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
    case 3:
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
    case 4:
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      break;
    case 5:
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      break;
    case 6:
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      break;
    case 7:
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      break;
    case 8:
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      break;
    case 9:
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      break;
  }
  digitalWrite(8,HIGH);
}
