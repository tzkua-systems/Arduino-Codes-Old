int firstLED = 10;
int secondLED = 11;
int thirdLED = 12;
int fourthLED = 13;
int interval = 500;

void setup() {
  // put your setup code here, to run once:
pinMode (firstLED, OUTPUT);
pinMode (secondLED, OUTPUT);
pinMode (thirdLED, OUTPUT);
pinMode (fourthLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//0000
digitalWrite (firstLED, LOW);
digitalWrite (secondLED, LOW);
digitalWrite (thirdLED, LOW);
digitalWrite (fourthLED, LOW);
delay (interval);
//0001
digitalWrite (firstLED, LOW);
digitalWrite (secondLED, LOW);
digitalWrite (thirdLED, LOW);
digitalWrite (fourthLED, HIGH);
delay (interval);
//0010
digitalWrite (firstLED, LOW);
digitalWrite (secondLED, LOW);
digitalWrite (thirdLED, HIGH);
digitalWrite (fourthLED, LOW);
delay (interval);
//0011
digitalWrite (firstLED, LOW);
digitalWrite (secondLED, LOW);
digitalWrite (thirdLED, HIGH);
digitalWrite (fourthLED, HIGH);
delay (interval);
//0100
digitalWrite (firstLED, LOW);
digitalWrite (secondLED, HIGH);
digitalWrite (thirdLED, LOW);
digitalWrite (fourthLED, LOW);
delay (interval);
//0101
digitalWrite (firstLED, LOW);
digitalWrite (secondLED, HIGH);
digitalWrite (thirdLED, LOW);
digitalWrite (fourthLED, HIGH);
delay (interval);
//0110
digitalWrite (firstLED, LOW);
digitalWrite (secondLED, HIGH);
digitalWrite (thirdLED, HIGH);
digitalWrite (fourthLED, LOW);
delay (interval);
//0111
digitalWrite (firstLED, LOW);
digitalWrite (secondLED, HIGH);
digitalWrite (thirdLED, HIGH);
digitalWrite (fourthLED, HIGH);
delay (interval);
//1000
digitalWrite (firstLED, HIGH);
digitalWrite (secondLED, LOW);
digitalWrite (thirdLED, LOW);
digitalWrite (fourthLED, LOW);
delay (interval);
//1001
digitalWrite (firstLED, HIGH);
digitalWrite (secondLED, LOW);
digitalWrite (thirdLED, LOW);
digitalWrite (fourthLED, HIGH);
delay (interval);
//1010
digitalWrite (firstLED, HIGH);
digitalWrite (secondLED, LOW);
digitalWrite (thirdLED, HIGH);
digitalWrite (fourthLED, LOW);
delay (interval);
//1011
digitalWrite (firstLED, HIGH);
digitalWrite (secondLED, LOW);
digitalWrite (thirdLED, HIGH);
digitalWrite (fourthLED, HIGH);
delay (interval);
//1100
digitalWrite (firstLED, HIGH);
digitalWrite (secondLED, HIGH);
digitalWrite (thirdLED, LOW);
digitalWrite (fourthLED, LOW);
delay (interval);
//1101
digitalWrite (firstLED, HIGH);
digitalWrite (secondLED, HIGH);
digitalWrite (thirdLED, LOW);
digitalWrite (fourthLED, HIGH);
delay (interval);
//1110
digitalWrite (firstLED, HIGH);
digitalWrite (secondLED, HIGH);
digitalWrite (thirdLED, HIGH);
digitalWrite (fourthLED, LOW);
delay (interval);
//1111
digitalWrite (firstLED, HIGH);
digitalWrite (secondLED, HIGH);
digitalWrite (thirdLED, HIGH);
digitalWrite (fourthLED, HIGH);
delay (interval);

}
