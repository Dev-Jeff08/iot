int light = 13;

char ledState;

void setup() {
  Serial.begin(9600);

  pinMode(light, OUTPUT);
}

void lightTurnOn() {
  digitalWrite(light, HIGH);
}

void lightTurnOff() {
  digitalWrite(light, LOW);
}

void loop() {
  ledState = Serial.read();

  if(ledState == "true") {
    lightTurnOn();
  }
  else if (ledState == "false") {
    lightTurnOff();
  };
}