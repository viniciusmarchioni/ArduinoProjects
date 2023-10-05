
int buttonState = 0;
int cor = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(12, INPUT);
}

void loop()
{
  buttonState = digitalRead(12);
  if (buttonState == HIGH) {
    cor ++;
    Serial.println(cor);

  }
  
  switch(cor) {
  case 1:
    digitalWrite(6, HIGH);
    digitalWrite(8, LOW);
  	digitalWrite(10, LOW);
    break;
  case 2:
    digitalWrite(6, LOW);
    digitalWrite(8, HIGH);
  	digitalWrite(10, LOW);
    break;
  default:
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
  	digitalWrite(10, HIGH);
}
  if(cor > 2){
    cor = 0;
  }
  delay(500);
}