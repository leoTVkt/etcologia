// C++ code
//
int ledr = 13;
int leda = 12;
int ledam = 11;
int ledn = 10;
int ledb = 9;
void setup()
{
  pinMode(ledr, OUTPUT);
  pinMode(leda, OUTPUT);
  pinMode(ledam, OUTPUT);
  pinMode(ledn, OUTPUT);
  pinMode(ledb, OUTPUT);

}

void loop()
{
  digitalWrite(ledr, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(leda, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledam, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledn, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledb, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledr, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(leda, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledam, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledn, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledb, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
}
