const int heartRate=A0;
const int led=9;
int val;
void setup() {
  // put your setup code here, to run once:
pinMode(heartRate,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int val=analogRead(heartRate);

if(val<400)
{
digitalWrite(led,HIGH);
}
if(val>600)
{
digitalWrite(led,HIGH);
}
else
{
digitalWrite(led,LOW);  
}
Serial.println(val);
delay(200);
}
