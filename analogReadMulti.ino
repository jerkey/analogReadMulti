void setup() {
  Serial.begin(115200);
}

int a13,a14,a15;

#define SHRINK 35

void loop() {
  a13 = analogRead(A13);
  Serial.print(a13);
  Serial.print(" ");
  for (int i = 0 ; i < SHRINK ; i++) {
    if ((a13 / SHRINK) > i) Serial.print("#");
      else Serial.print(" ");
  }
  Serial.print(" ");
  a14 = analogRead(A14);
  Serial.print(a14);
  Serial.print(" ");
  for (int i = 0 ; i < SHRINK ; i++) {
    if ((a14 / SHRINK) > i) Serial.print("#");
      else Serial.print(" ");
  }
  Serial.print(" ");
  a15 = analogRead(A15);
  Serial.print(a15);
  Serial.print(" ");
  for (int i = 0 ; i < SHRINK ; i++) {
    if ((a15 / SHRINK) > i) Serial.print("#");
      else Serial.print(" ");
  }
  Serial.println("");    
}
