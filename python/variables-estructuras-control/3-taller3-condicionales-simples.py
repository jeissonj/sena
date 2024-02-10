# # Taller 3 Python
# Autor: Jeisson Jesús Valencia Vallejo
# Fecha: 10 Febrero 2024

from datetime import date

hoy = date.today()
print("Hoy es el día: ",hoy)
#fecha actual
a=int (input ("digite el valor de A: "))
b=int (input ("digite el valor de B: "))
if a>=b:
    print ("A es mayor o igual a B")
else:
    print ("A es menor que B \n")
curso1, curso2 =("Requerimientos","Algoritmos")

print("El cursol es: %s \nEl curso2 es: %s"%(curso1, curso2))
if curso1 == "Requerimientos" and curso2 == "Algoritmos":
    print("Usted estudia Programación de Software \n")
else:
    print ("Usted estudia otro programa diferente a Programación de Software \n")

print ("*** Final del Análisis del Programa de Formación SENA ***\n")

frase = input("Digite una oracion: ")
print ("La frase en mayuscula es: ", frase.upper() )
longitud = len(frase)
print("La longitud de la frase es: ", len(frase), "caracteres")
if longitud>10:
    print ("La frase contiene mas de 10 caracteres \n")
else:
    print ("La frase contiene menos de 11 caracteres\n")

print ("FIN, espero tenga un exelente dia :3")