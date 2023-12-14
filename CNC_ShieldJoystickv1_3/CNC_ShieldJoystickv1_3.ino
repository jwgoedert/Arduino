// Stepper Motor X
const int stepPinX = 2; // X.STEP
const int dirPinX = 5;  // X.DIR

// Stepper Motor Y
const int stepPinY = 3;
const int dirPinY = 6;  // X.DIR

// Auto Switch Digital pins
const int ldown = 12;
const int lup = 13;
const int rDown = 10;
const int rUp = 11;

// Joystick
int vrx = A0;
int vry = A1;
int vrx_data = 0;
int vry_data = 0;

// Print values 
int vrx_data_old = 0;
int vry_data_old = 0;
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
    pinMode(vrx, INPUT);
    pinMode(vry, INPUT);
    pinMode(l
}

void loop()
{

    joystick();
}

void joystick()
{
    
    vrx_data = analogRead(vrx);
    vry_data = analogRead(vry);
    //  Serial.println(abs(vrx_data - vrx_data_old));

    if (abs(vrx_data - vrx_data_old)> print_range){
    // Serial.print("Vrx:");
    // Serial.println(vrx_data);
      }
      if (abs(vry_data - vry_data_old)>print_range){
    // Serial.print("Vry:");
    // Serial.println(vry_data);    
        }
    
    

    // to stop the stepper motor
    if ((vrx_data > 490) && (vrx_data < 510))
    {

        ;
    }

    if (vrx_data > 700 && vry_data > 700)
    {

        digitalWrite(dirPinX, HIGH);
        digitalWrite(dirPinY, LOW);
        x = x + 1;
        y = y + 1;
        digitalWrite(stepPinX, HIGH);
        digitalWrite(stepPinY, HIGH);
        delayMicroseconds(SMSpeed);
        digitalWrite(stepPinX, LOW);
        digitalWrite(stepPinY, LOW);
        delayMicroseconds(SMSpeed);
    }

    if (vrx_data < 300 && vry_data < 300)
    {
        digitalWrite(dirPinX, LOW);
        digitalWrite(dirPinY, HIGH);
        x = x - 1;
        y = y - 1;

        digitalWrite(stepPinX, HIGH);
        digitalWrite(stepPinY, HIGH);
        delayMicroseconds(SMSpeed);
        digitalWrite(stepPinX, LOW);
        digitalWrite(stepPinY, LOW);
        delayMicroseconds(SMSpeed);
    }
}
