#define joyX A0

int xValue,buttonState;
int buttonPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT); 
}
 
void loop() {
  xValue = analogRead(joyX);
  buttonState = digitalRead(buttonPin);
 
  if(xValue > 900){
    delay(100);
    Serial.println("RIGHT");
    }
  if(xValue < 100){
    delay(100);
    Serial.println("LEFT");
    } 
  if(buttonState == 0){
    delay(250);
    Serial.println("SHOOT");
    }
  delay(10);
//  Serial.print(buttonState);
}
