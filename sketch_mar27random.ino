int ledPin = 13; 

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, HIGH);
    delay(500); 
    digitalWrite(ledPin, LOW);
    int waittime = random(2000, 20000);
    delay(waittime);
}

