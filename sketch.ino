int sensorHumo = A0;
int led = 8;
int buzzer = 9;

void setup() {
  // declaramos los pines, salidas
pinMode(led, OUTPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);
}

void loop() {
int valorHumo = analogRead(sensorHumo);
Serial.println(valorHumo);
// Si el valor del humo es mayor a 300 se enciende la luz y el buzzer
if (valorHumo > 300) {
//se enciende la luz
digitalWrite(led, HIGH);
//se enciende el buzzer
digitalWrite(buzzer, HIGH);

} else {
// la luz se mantiene apagada
digitalWrite(led, LOW);
//el buzzer se mantiene apagado
digitalWrite(buzzer, LOW);
}

delay(500);
}
