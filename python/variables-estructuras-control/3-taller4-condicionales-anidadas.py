# # Taller 4 Python
# Autor: Jeisson Jesús Valencia Vallejo
# Fecha: 10 Febrero 2024

from datetime import date

hoy = date.today()
print("Hoy es el día: \n",hoy)
#fecha actual
print ("EJERCICIO DE LAS CLASES DE TRIANGULOS")
a=int (input ("digite el valor de A: "))
b=int (input ("digite el valor de B: "))
c=int (input ("digite el valor de C: "))
if a==b and b==c:
    print ("EL TRIANGULO ES EQUILATERO")
else:
    if a==b or b==c or a==c:
        print("EL TRIANGULO ES ISOCELES\n")
    else:
        print ("EL TRIANGULO ES ESCALENO\n")

animal=input("digite un animal: *")
animal = animal.upper ()
if animal =="PERRO":
    print ("Este animal es el menor amigo del hombre:", animal)
elif animal=="GATO":
    print ("Este animal persigue a los ratones: ", animal)
elif animal=="OSO":
    print ("Este animal vive en el polonorte: ", animal)
else:
    print ("No es PERRO, no es GATO, ni es 0S0... es: ", animal)
print ()
print ("FIN, espero tenga un exelente dia :3")