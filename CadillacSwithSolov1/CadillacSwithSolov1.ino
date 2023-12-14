// Auto Switch Digital pins

const int rightDOWN = 7;
const int rightUP = 8;

const int leftUP = 10;
const int leftDOWN = 13;
// leftUP is 7 & 13
// toggle Up is 8 & 10
const int toggleRIGHT = 11;
const int toggleLEFT = 12;

void setup()
{
  // Sets the two pins as Outputs
  Serial.begin(9600);
  pinMode(stepPinX, OUTPUT);
  pinMode(stepPinY, OUTPUT);
  pinMode(dirPinX, OUTPUT);
  pinMode(dirPinY, OUTPUT);
  pinMode(toggleRIGHT, INPUT);
  pinMode(toggleLEFT, INPUT);
  pinMode(rightDOWN, INPUT);
  pinMode(rightUP, INPUT);
  pinMode(leftDOWN
, INPUT);
  pinMode(leftUP, INPUT);
}

void loop()
{

  switchHit();
}

void switchHit()
{
  int pin7Value = digitalRead(rUp);
  int pin8Value = digitalRead(rDown);

  int pin13Value = digitalRead(lUp);
  int pin10Value = digitalRead(lDown);

  int pin11Value = digitalRead(toggleUp);
  int pin12Value = digitalRead(toggleDown);

  // Print the values to the Serial Monitor
 if(pin7Value == 1 && pin13Value == 1){
    Serial.println("TOGGLE DOWN pin 7 & 13:--- ");  
  }

  if(pin8Value == 1 && pin10Value == 1){
    Serial.println("TOGGLE UP pin 8 & 10:--- ");  
  }
  
  if (pin7Value == 1 && pin13Value != 1 ) {
    Serial.print("RIGHT DOWN pin     7:--- ");
    Serial.println(pin7Value);
  }

  if (pin8Value == 1 && pin10Value != 1) {
    Serial.print("RIGHT UP pin   8:--- ");
    Serial.println(pin8Value);
  }

  if (pin13Value == 1 && pin7Value != 1) {
    Serial.print("LEFT DOWN pin   13:--- ");
    Serial.println(pin13Value);
  }

  if (pin10Value == 1 && pin8Value != 1) {
    Serial.print("LEFT UP pin 10:--- ");
    Serial.println(pin10Value);
  }

  if (pin11Value == 1) {
    Serial.print("TOGGLE LEFT pin     11:--- ");
    Serial.println(pin11Value);
  }
  
  if (pin12Value == 1) {
    Serial.print("TOGGLE RIGHT pin   12:--- ");
    Serial.println(pin12Value);
  }

}
