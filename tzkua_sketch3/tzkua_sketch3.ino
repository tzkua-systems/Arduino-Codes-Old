// declaration of variables
//data_type variable_name = value;
int redLED = 13;
int dit = 100;
int dat = 500;
float pi = 3.142;
String myName = "Tobi Taiwo";


void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  delay(dat);
  digitalWrite(redLED, LOW);
  delay(dat);

  digitalWrite(redLED, HIGH);
  delay(dat);
  digitalWrite(redLED, LOW);
  delay(dat);

  digitalWrite(redLED, HIGH);
  delay(dat);
  digitalWrite(redLED, LOW);
  delay(dat);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);
}
