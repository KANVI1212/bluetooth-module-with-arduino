char incomingValue = 0;
int LED1 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(LED1 , OUTPUT);
}

void loop() {
  if(Serial.available() > 0)
  {
    incomingValue = Serial.read();
    Serial.println(incomingValue);
    if(incomingValue == '1')
    {
      digitalWrite( LED1 , HIGH);
    }
    if(incomingValue == '0')
    {
      digitalWrite( LED1 , LOW);
    }
  }
}
