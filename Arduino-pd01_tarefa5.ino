// C++ code
/*Tarefa 5
	-a partir do circuito anterior,
    insira um botão, da mesma forma que na tarefa 2.*/

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, INPUT);
  
}

void loop()
{
  /*Faça com que, caso o botão seja apertado a
  sinaleira UM fique em Verde e a DOIS em Vermelho
  */
  if(!digitalRead(8)){
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
  }
  /*Quando o botão não estiver pressionado faça
    com que a sinaleira UM fique em Vermelho e a DOIS em 
    Verde.*/
  else {
    digitalWrite(4, HIGH);
    digitalWrite(2, LOW);
  }
}