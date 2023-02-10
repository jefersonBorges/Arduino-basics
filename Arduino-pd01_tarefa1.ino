// C++ code
//Tarefa1
void setup()
{
  pinMode(2,OUTPUT);//LED
}

void loop()
{
  digitalWrite(2,HIGH);
  delay(2000);
  digitalWrite(2,LOW);
  delay(2000);
}