// C++ code
/*Tarefa 6
	-a partir do circuito anterior, faça com que cada vez 
	que você pressiona o botão as sinaleiras troquem de cor
	e permaneçam assim até o botão ser pressionado novamente.*/

const int buttonPin = 13;
const int signalOnePin = 2;
const int signalTwoPin = 6;

const bool pressedButton = true;
bool lightsOn = false;

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(signalOnePin, OUTPUT);
  pinMode(signalTwoPin, OUTPUT);
}

void loop()
{

  if(digitalRead(buttonPin) == pressedButton){
    lightsOn = !lightsOn;
    hitTheLights(lightsOn);
      while(digitalRead(buttonPin) == pressedButton){
      //do nothing else while button is pressed
    }
  }
}

void hitTheLights( bool signal ){ //change the LED state
  if(signal == true){ 
    digitalWrite(signalOnePin, HIGH);
    digitalWrite(signalTwoPin, LOW);
  } else {
    digitalWrite(signalTwoPin, HIGH);
    digitalWrite(signalOnePin, LOW);
  }
}