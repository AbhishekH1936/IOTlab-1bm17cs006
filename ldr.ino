int in=0;
int led=13;

void setup() {
  // put your setup code here, to run once:

pinMode(in,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

int val=analogRead(in);

//Serial.println(   val);
int thre=1000;
if(val<thre)
{
  digitalWrite(led,HIGH);
  
}
else
{
  digitalWrite(led,LOW);
}

}
