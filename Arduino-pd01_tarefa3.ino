// C++ code
/*tarefa 3
	-monte agora uma sinaleira, com três leds coloridos,
    Verde, Vermelho e Amarelo, fazendo os leds
    acenderem um de cada vez, em sequência,
    cada um permanecendo acesso por um minuto.
*/
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);//Led vermelho
  delay(60000);
  digitalWrite(13, LOW);
  
  digitalWrite(8, HIGH);//Led Amarelo
  delay(60000);
  digitalWrite(8, LOW);
  
  digitalWrite(7, HIGH);//Led Verde
  delay(60000);
  digitalWrite(7, LOW);
  
}