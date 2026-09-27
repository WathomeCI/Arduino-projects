// Home Automation - Bluetooth Control
// By Eng. Wathome C. I

char data = 0;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop() {
  if(Serial.available() > 0){
    data = Serial.read();
    if(data == '1') digitalWrite(13, HIGH);
    if(data == '0') digitalWrite(13, LOW);
  }
}
