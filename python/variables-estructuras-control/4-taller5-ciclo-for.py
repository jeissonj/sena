# # Taller 5 Python
# Autor: Jeisson Jesús Valencia Vallejo
# Fecha: 10 Febrero 2024

from datetime import date

hoy = date.today()
print("Hoy es el día: \n",hoy)

print("Taller 5 Ciclos Iterativos con la Sentencia For\n")

num1=int(input ("digite el primer numero: "))
num2=int (input ("digite el segundo numero (mayor) : ") )
print ("ciclo para el primer numero")
for i in range (num1) :
    print (i)
print ('fin del ciclo\n')

print ("ciclo desde el primer numero hasta el segundo numero")
for i in range (num1, num2):
    print (i)
print ('fin del ciclo\n')

print ("ciclo desde el primero hasta el segundo numero con incrementos de 2")
for i in range (num1, num2, 2):
    print (i)
print ('fin del ciclo\n')

empresa=input("digite nombre de una empresa: ")
empresa= empresa.lower()
for character in empresa:
    print(character)
print ("fin del ciclo")

print ("FIN, espero tenga un exelente dia :3")