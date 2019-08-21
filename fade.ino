int x=0;
void setup() {
  Serial.begin(9600);
}
void loop() {
int rawvolt=analogRead(x);

float milli=(rawvolt/1024.0)*5000;
float celcius=milli/10;
Serial.print(celcius);
Serial.print("degree celcius");
Serial.print((celcius*9)/5+32);
Serial.print("degree farenheit");
delay(2000);


 
}
