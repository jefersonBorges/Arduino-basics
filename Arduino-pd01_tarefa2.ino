// C++ code
// Tarefa 2
/*
	-Insira um botão com um resistor em série, 
    	ligado ao zero volt, e a outra ponta do resistor a +5V.
	-Ligue a união do botão com o resistor com
    	o pino 13 do Arduino.
    -Declare o pino 13 como entrada.
	-Faça com que, caso o botão seja apertado
    	(colocar o mouse em cima dele e manter 
        pressionado o botão esquerdo) o led acenda,
        e quando não pressionado o led permaneça apagado.
*/

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(13,INPUT);
}

void loop()
{
  if(!digitalRead(13)){ 
    digitalWrite(2,HIGH);
  } else {
    digitalWrite(2,LOW);
  }
}