int solenoidPin = 4;

void setup() {
    pinMode(solenoidPin, OUTPUT);
}

void loop() {
    digitalWrite (solenoidPin, HIGH); // switch solenoid ON
    delay(1800000);                   // wait 30 minutes
    digitalWrite (solenoidPin, LOW);  // switch solenoid OFF
    delay (1800000);                  // wait 30 minutes
}


