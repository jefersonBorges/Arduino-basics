// C++ code
/*Tarefa 7
	- coloque 5 leds em cinco portas distintas do Arduino
	- coloque um botão no circuito
	- a condição inicial é que todos os leds estejam apagados
	- faça com que toda a vez que você apertar no botão, 
    um led diferente, em sequência, acenda.
	-mantenha o led anterior acesso até que 
    se complete o ciclo de 5 leds acessos, 
    quando então, no próximo aperto de botão,
    todos os leds se apaguem, voltando a condição original.
*/
const int wLedPin = 13;
const int gLedPin = 12;
const int yLedPin = 11;
const int bLedPin = 10;
const int rLedPin = 9;
const int buttonPin = 8;
const bool buttonPressed = true;

int ledNumber = 0;

void setup()
{
  pinMode(wLedPin, OUTPUT);
  pinMode(gLedPin, OUTPUT);
  pinMode(yLedPin, OUTPUT);
  pinMode(bLedPin, OUTPUT);
  pinMode(rLedPin, OUTPUT);
  
  pinMode(buttonPin, INPUT);
}

void loop()
{
  if(digitalRead(buttonPin) == buttonPressed){
    setLedNumber();
    hitTheLights(ledNumber);
    while(digitalRead(buttonPin) == buttonPressed){
      // nothing else;
    }
  }
}

void setLedNumber(){
  if(ledNumber > 4){
    ledNumber = 0;
  }else if(ledNumber >= 0 && ledNumber <= 5){
    ledNumber++;
  }
}

void hitTheLights(int ledNumber){
    
  switch(ledNumber){
    case 0:
    digitalWrite(wLedPin, LOW);
    digitalWrite(gLedPin, LOW);
    digitalWrite(yLedPin, LOW);
    digitalWrite(bLedPin, LOW);
    digitalWrite(rLedPin, LOW);
    break;
    case 1:
    digitalWrite(wLedPin, HIGH);
    digitalWrite(gLedPin, LOW);
    digitalWrite(yLedPin, LOW);
    digitalWrite(bLedPin, LOW);
    digitalWrite(rLedPin, LOW);
    break;
    case 2:
    digitalWrite(wLedPin, LOW);
    digitalWrite(gLedPin, HIGH);
    digitalWrite(yLedPin, LOW);
    digitalWrite(bLedPin, LOW);
    digitalWrite(rLedPin, LOW);
    break;
    case 3:
    digitalWrite(wLedPin, LOW);
    digitalWrite(gLedPin, LOW);
    digitalWrite(yLedPin, HIGH);
    digitalWrite(bLedPin, LOW);
    digitalWrite(rLedPin, LOW);
    break;
    case 4:
    digitalWrite(wLedPin, LOW);
    digitalWrite(gLedPin, LOW);
    digitalWrite(yLedPin, LOW);
    digitalWrite(bLedPin, HIGH);
    digitalWrite(rLedPin, LOW);
    break;
    case 5:
    digitalWrite(wLedPin, LOW);
    digitalWrite(gLedPin, LOW);
    digitalWrite(yLedPin, LOW);
    digitalWrite(bLedPin, LOW);
    digitalWrite(rLedPin, HIGH);
    break;
  }
}