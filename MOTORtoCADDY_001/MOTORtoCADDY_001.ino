
int pinA3 = 3;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;
int pin12 = 12;
int pin 13 = 13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(stepPinX, OUTPUT);
  pinMode(stepPinY, OUTPUT);
  pinMode(dirPinX, OUTPUT);
  pinMode(dirPinY, OUTPUT);
  pinMode(pinA3, INPUT);
  pinMode(pin9, INPUT);
  pinMode(pin10, INPUT);
  pinMode(pin11, INPUT);
  pinMode(pin12, INPUT);
  pinMode(pin13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
