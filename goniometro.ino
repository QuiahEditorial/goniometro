// Por Roberto A. Zavala
// Breve : https://es.overleaf.com/read/bxyszzbykrqx
// 🙏🏼    : DNv7acPAeVBhTXbKv26itJecPG1SPy2o4F

float m = 0.31578;         // 950 bit / 300°
float b = -150;            // La lectura será de 0° cuando la perilla esté justo a la mitad
float V;                   // El voltaje en bits
float a;                   // El ángulo en grados

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  V = analogRead(A0);
  a = m * V + b;           // El potenciómetro tiene un comportamiento lineal
  Serial.println(a);
  delay(200);
}
