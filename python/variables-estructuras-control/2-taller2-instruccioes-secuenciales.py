# # Taller 1 Python
# Autor: Jeisson Jesús Valencia Vallejo
# Fecha: 10 Febrero 2024

from datetime import date

hoy = date.today()
print("Hoy es el día: ",hoy)

a = int(input("Digite el prímer número: "))
b = int(input("Digite el segundo número: "))
c = int(input("Digite el tercer número: "))
x = [a,b,c]
print("El valor maximo es: %d \n El valor minimo es %d \n La suma de los tres numeros es %d \n"%(max(x),min(x),sum(x)))
z = float(input("Digite un número con decimales: "))
print("El valor de %f redondeado es %d \n"%(z,round(z)))
frase = input("Digite una oración: ")   
print("La frase en mayuscula es: %s \nLa frase en minuscula es %s \nLa frase con mayúscula inicial es: %s \nLa frase palabras en mayúscula es: %s \nLa Longitud de la frase es: %d caracteres \nFin, espero tenga un exelente dia :3"%(frase.upper(), frase.lower(), frase.capitalize(), frase.title(), len(frase)))