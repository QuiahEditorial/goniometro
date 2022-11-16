
float rho=0;
int   Ve= 5;
float Vs=0;

void setup() 
{
  Serial.begin(9600);
  rho = .187/360;
}

void loop() 
{
  int sensorValue = analogRead(A0);
  float Vs = sensorValue / 204.6;
  A = Vs/rho;
  Serial.println(A);
}
