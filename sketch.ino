int sensorHumo = A0;
int led = 8;
int buzzer = 9;

void setup() {
pinMode(led, OUTPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);
}

void loop() {
int valorHumo = analogRead(sensorHumo);
Serial.println(valorHumo);

if (valorHumo > 300) {
digitalWrite(led, HIGH);
digitalWrite(buzzer, HIGH);
} else {
digitalWrite(led, LOW);
digitalWrite(buzzer, LOW);
}

delay(500);
}
