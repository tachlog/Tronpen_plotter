int Pin0 = 8;
int Pin1 = 9;
int Pin2 = 10;
int Pin3 = 11;

int stepin = 0;
int _step = 0;
boolean dir = false;// gre

int x,y;
void setup()
{
  pinMode(Pin0, OUTPUT);
  pinMode(Pin1, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  Serial.begin(9600);
}



void loop()
{
  
  acw();
  while(1);


}

void cw()
{
  for(x=0;x<550;x++)
   for (stepin = 0; stepin <= 7; stepin++)
  {
    Serial.println(stepin);
    switch (stepin) {
      case 0:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, HIGH);
        break;
      case 1:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, HIGH);
        digitalWrite(Pin3, HIGH);
        break;
      case 2:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, HIGH);
        digitalWrite(Pin3, LOW);
        break;
      case 3:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, HIGH);
        digitalWrite(Pin3, LOW);
        break;
      case 4:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        break;
      case 5:
        digitalWrite(Pin0, HIGH);
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        break;
      case 6:
        digitalWrite(Pin0, HIGH);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        break;
      case 7:
        digitalWrite(Pin0, HIGH);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, HIGH);
        break;
      default:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        break;
    }
    delay(1);
  }
  
  
}
void acw()
{
  for(x=0;x<550;x++)
  for (stepin = 7; stepin >= 0; stepin--)
  {
    Serial.println(stepin);
    switch (stepin) {
      case 0:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, HIGH);
        break;
      case 1:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, HIGH);
        digitalWrite(Pin3, HIGH);
        break;
      case 2:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, HIGH);
        digitalWrite(Pin3, LOW);
        break;
      case 3:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, HIGH);
        digitalWrite(Pin3, LOW);
        break;
      case 4:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        break;
      case 5:
        digitalWrite(Pin0, HIGH);
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        break;
      case 6:
        digitalWrite(Pin0, HIGH);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        break;
      case 7:
        digitalWrite(Pin0, HIGH);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, HIGH);
        break;
      default:
        digitalWrite(Pin0, LOW);
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        break;
    }
    delay(1);
  }
  

}

