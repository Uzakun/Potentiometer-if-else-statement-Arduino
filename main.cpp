int lol=A2;
int readlol;
float V2;
int dt=750;
int pin=9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lol,INPUT);
pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readlol = analogRead(lol);
V2 = (5./1023.)*readlol;
Serial.print("Poentiometer reading is ");
Serial.println(V2);
if (V2 > 4.0) {
  digitalWrite(pin, HIGH);
}
else {
  digitalWrite(pin, LOW);
}
delay(dt);
}