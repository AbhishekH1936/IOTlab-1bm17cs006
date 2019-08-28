int val;
int out;
int pin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  Serial.begin(9600);
    

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0);
  out = map(val, 0, 1023, 0, 255);
  analogWrite (pin, out);
  
  Serial.print("Val=");
  Serial.println(val);
  Serial.print("Out=");
  Serial.println(out);
  delay(10);
 
  

}
