
float m = 0.31578;         // 950 bit / 300°
float b = -150;            // La lectura será de 0° cuando la perilla esté justo a la mitad
float V;                   // El voltaje en bits

void setup()
{
  Serial.begin(9600)
}

void loop()
{
  V = analogRead(A0);
  a = m * V + b;           // El potenciómetro tiene un comportamiento lineal
  Serial.println(A);
  delay(200);
}
