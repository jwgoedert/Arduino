// Stepper Motor X
const int stepPinX = 2; // X.STEP
const int dirPinX = 5;  // X.DIR
// Stepper Motor Y
const int stepPinY = 3;
const int dirPinY = 6;  // X.DIR
// Auto Switch Digital pins

const int rDown = 7;
const int rUp = 8;

const int toggleUp = 13;
const int toggleDown = 10;

const int lDown = 11;
const int lUp = 12;

int print_range = 10;
int x = 0;
int y = 0;
int SMSpeed = 200; // Stepper Motor Speed
void setup()
{
  // Sets the two pins as Outputs
  Serial.begin(9600);
  pinMode(stepPinX, OUTPUT);
  pinMode(stepPinY, OUTPUT);
  pinMode(dirPinX, OUTPUT);
  pinMode(dirPinY, OUTPUT);
  pinMode(lDown, INPUT);
  pinMode(lUp, INPUT);
  pinMode(rDown, INPUT);
  pinMode(rUp, INPUT);
  pinMode(toggleUp, INPUT);
  pinMode(toggleDown, INPUT);
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


//  Serial.println("----*----*----*----*----*");
  //
  // Delay for readability (adjust as needed)
  delay(250);
  //    if ((vrx_data > 490) && (vrx_data < 510))
  //    {
  //
  //        ;
  //    }
  //
  //    if (vrx_data > 700 && vry_data > 700)
  //    {
  //
  //        digitalWrite(dirPinX, HIGH);
  //        digitalWrite(dirPinY, LOW);
  //        x = x + 1;
  //        y = y + 1;
  //        digitalWrite(stepPinX, HIGH);
  //        digitalWrite(stepPinY, HIGH);
  //        delayMicroseconds(SMSpeed);
  //        digitalWrite(stepPinX, LOW);
  //        digitalWrite(stepPinY, LOW);
  //        delayMicroseconds(SMSpeed);
  //    }
  //
  //    if (vrx_data < 300 && vry_data < 300)
  //    {
  //        digitalWrite(dirPinX, LOW);
  //        digitalWrite(dirPinY, HIGH);
  //        x = x - 1;
  //        y = y - 1;
  //
  //        digitalWrite(stepPinX, HIGH);
  //        digitalWrite(stepPinY, HIGH);
  //        delayMicroseconds(SMSpeed);
  //        digitalWrite(stepPinX, LOW);
  //        digitalWrite(stepPinY, LOW);
  //        delayMicroseconds(SMSpeed);
  //    }
}
