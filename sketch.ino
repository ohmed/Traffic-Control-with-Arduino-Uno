void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  if(!Serial) Serial.println("serial is not ok");
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  Serial.println("green is on");
  delay(2000);
  digitalWrite(3, LOW);
  Serial.println("green is off");
  digitalWrite(4, HIGH);
  Serial.println("yellow is on");
  delay(600);
  digitalWrite(4, LOW);
  Serial.println("yellow is off");
  digitalWrite(5, HIGH);
  Serial.println("red is on");
  delay(1800);
  digitalWrite(4, HIGH);
  Serial.println("yellow is on");
  delay(400);
  digitalWrite(5, LOW);
  Serial.println("red is off");
  digitalWrite(4, LOW);
  Serial.println("yellow is off");

}
