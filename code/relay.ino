/************************
  Exercise the motor using
  the relay
************************/

#define ENABLE 11
#define DIRA 9
#define DIRB 10

int i;

void setup() {
  //---set pin direction
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  //---relay example
  digitalWrite(ENABLE, HIGH); // enable on
  for (i = 0; i < 5; i++)
  {
    Serial.println("spin");
    digitalWrite(DIRA, HIGH); //motor spins
    digitalWrite(DIRB, LOW);
    delay(2500);
    Serial.println("stop");
    digitalWrite(DIRA, LOW); //motor stops
    digitalWrite(DIRB, LOW);
    delay(2500);
  }
}
