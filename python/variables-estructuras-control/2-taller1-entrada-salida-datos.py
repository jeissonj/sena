# Taller 1 Python
# Autor: Jeisson Jesús Valencia Vallejo
# Fecha: 9 Febrero 2024

from datetime import date

li = []
hoy = date.today()

print("Hoy es el día: ",hoy)

n1 = int(input("Digite el primer número: "))
n2 = int(input("Digite el primer número: "))

li.append(n1 + n2)
li.append(n1 - n2)
li.append(n1 * n2)
li.append(n1 / n2)

print("la suma es %d, la resta %d, el producto %d, la división %.2f \n Fin, espero tenga un exelente dia :)"%(li[0],li[1],li[2],li[3]))