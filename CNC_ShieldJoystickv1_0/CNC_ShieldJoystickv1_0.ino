
// CNC Shield Stepper  Control Demo
// Superb Tech
// www.youtube.com/superbtech

const int StepX = 2;
const int DirX = 5;
const int StepY = 3;
const int DirY = 6;
const int StepZ = 4;
const int DirZ = 7;


void setup() {
  pinMode(StepX,OUTPUT);
  pinMode(DirX,OUTPUT);
  pinMode(StepY,OUTPUT);
  pinMode(DirY,OUTPUT);
  pinMode(StepZ,OUTPUT);
  pinMode( DirZ,OUTPUT);

}

void loop() {
 int stepDelay = 500;
 int cycleDelay = 1000;
 int duration = 200;
 digitalWrite(DirX, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
 digitalWrite(DirY, HIGH);
 digitalWrite(DirZ, HIGH);
 
 for(int x = 0; x<duration; x++) { // loop for duration steps
  digitalWrite(StepX,HIGH);
  delayMicroseconds(stepDelay);
  digitalWrite(StepX,LOW); 
  delayMicroseconds(stepDelay);
 }
delay(1000); // delay for 1 second

for(int x = 0; x<duration; x++) { // loop for duration steps
  digitalWrite(StepY,HIGH);
  delayMicroseconds(stepDelay);
  digitalWrite(StepY,LOW); 
  delayMicroseconds(stepDelay);
 }
delay(stepDelay); // delay for 1 second

//for(int x = 0; x<duration; x++) { // loop for duration steps
//  digitalWrite(StepZ,HIGH);
//  delayMicroseconds(stepDelay);
//  digitalWrite(StepZ,LOW); 
//  delayMicroseconds(stepDelay);
// }
delay(cycleDelay); // delay for 1 second

}
