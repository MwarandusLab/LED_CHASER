
int White = 13;
int Yellow = 12;
int Red = 11;
int Green = 10;
int t = 100;

void setup() {
  pinMode(White, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);

}

void loop() {
  
  digitalWrite(White, HIGH);
  delay(t);
  digitalWrite(White, LOW);
  delay(t);
  digitalWrite(Yellow, HIGH);
  delay(t);
  digitalWrite(Yellow, LOW);
  delay(t);
  digitalWrite(Red, HIGH);
  delay(t);
  digitalWrite(Red, LOW);
  delay(t);
  
}
