# # Taller 6 Python
# Autor: Jeisson Jesús Valencia Vallejo
# Fecha: 10 Febrero 2024

from datetime import date

hoy = date.today()
print("Hoy es el día: \n",hoy)

print("Taller 6 Ciclos Iterativos con la Sentencia While\n")

numl = int(input("Digite un numero: "))
print("***Ciclo controlado por contador")
i = 1
while i <= numl:
    print (i)
    i += 1
print ('fin del ciclo\n')

print ("***Ciclo controlado por evento")
i=1
numero1 = 5
numero2 = int(input("Digite un número de 1 a 10: "))
while numero2 != numero1:
    i += 1
    numero2 = int(input ("Digite un número de 1 a 10: "))
print ("Acertaste en el intento No.%d 'fin del ciclo\n'"(i))

print ("***Ciclo abortado con la sentencia break")
amistad=input ("digite nombre de una amistad: ")
amistad= amistad.upper()
for character in amistad:
    print (character)
    if character=="A":
        break
print ("fin del ciclo\n")

print ("FIN, espero tenga un exelente dia :3")