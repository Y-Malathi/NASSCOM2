// C++ code
//
int LED1=2;
int LED2=3;
int sensorvalue=0;
int PHOTO=A0;
void setup()
{
  pinMode(PHOTO, INPUT);
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop()
{
  sensorvalue=analogRead(A0);
  Serial.println(sensorvalue);
  if(sensorvalue>400)
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
  else if(sensorvalue>200)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  }
  else
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
  }
}
