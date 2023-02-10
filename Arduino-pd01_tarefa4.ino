// C++ code
/*Tarefa 4
	-no circuito anterior monte MAIS mais uma sinaleira,
    com três leds coloridos, Verde, Vermelho e Amarelo.
	- faça com que, quando uma das sinaleiras estiver 
    em verde a outra fique em vermelho.
	- configure a seguinte sequência de acendimento:*/
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  /*1-sinaleira UM em verde, sinaleira DOIS EM Vermelho,
  por 1 segundo*/
  digitalWrite(13, HIGH);
  delay(1000);
  
  /*2-sinaleira UM em verde e amarelo,
  sinaleira DOIS em Vermelho, por 1 segundo*/
  digitalWrite(12, HIGH);
  delay(1000);
  
  /*3-sinaleira UM em vermelho, 
  sinaleira DOIS em Verde, por 1 segundo*/
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  
  digitalWrite(7, HIGH);
  delay(1000);
  
  /*4-sinaleira UM em vermelho, 
  sinaleira DOIS em verde e amarelo, por 1 segundo*/
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
}