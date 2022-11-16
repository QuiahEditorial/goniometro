# goniometro

Usa un potenciómetro como sensor de ángulo.
Para obtener una medición exacta es necesario caracterizar el potenciómetro:
Ubica una posición inicial de baja resistencia, mide el voltaje en bits en este punto que es 0°, repite a 270°.
Un potenciómetro es un sistema lineal, por ello usaremos una expresión del tipo y = m x + b
  donde b tomará valores convenientes para obtener una lectura de 0° en un punot intermedio, así será posible medir ángulos negativos.

