import sys
from servidor import perimetro, area

if len(sys.argv) != 2:
    sys.stderr.write(f"Error, uso: {sys.argv[0]} a \n")
    sys.exit(1)

a = int(sys.argv[1])
per = perimetro(a)
sup = area(a)
print(f"El perimetro del cuadrado es {per} \n")
print(f"El area del cuadrado es {sup} \n")
