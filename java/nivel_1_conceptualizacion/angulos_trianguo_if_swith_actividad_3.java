//1. Se requiere un programa que analice y resuelva cálculos relacionados con los triángulos, así:
//Se solicita al usuario que ingrese las medidas de todos los lados del triángulo y su altura.
//if, if else o if else if, según corresponda, mostrar en pantalla si se trata de un triángulo equilátero, isósceles o escaleno.
//switch calcular las medidas en grados de los ángulos, teniendo en cuenta el tipo de triángulo analizado.
//escaleno si sus tres lados son diferentes, equilátero si todos son iguales, e isósceles si únicamente lo son dos de ellos.
//cálculo de los ángulos, teorema del coseno:
import java.util.Scanner;
public class Main{
	public static void main(String[] args){
		double a,b,c,h,anguloa,angulob,anguloc,area;
		String tipo;
		Scanner s = new Scanner(System.in);
		System.out.println("Ingrese el valor de los tres lados a, b y c.");
		a = s.nextFloat();
		b = s.nextFloat();
		c = s.nextFloat();
		System.out.println("Ingrese la altura del triangulo. ");
		h = s.nextFloat();
		if( a == b & a == c){
			tipo = "Equílatero";
		}else if( (a == b & a != c) || (b==c &  b != a )){
			tipo = "Isósceles";
		}else{
			tipo = "Esaleno";
		}
		switch(tipo){
			case "Equílatero":
				anguloa = angulob = anguloc = 60;
				break;
			case "Isósceles":
				anguloa = Math.acos( (a*a - b*b)/(-2*b*c) );
				angulob = Math.acos( (b*b - c*c)/(-2*c*a));
				anguloc = Math.acos((c*c - a*a)/(-2* c*b));
				break;
			case "Escaleno":
				anguloa = Math.acos( (a*a - b*b)/(-2*b*c) );
				angulob = Math.acos( (b*b - c*c)/(-2*c*a));
				anguloc = Math.acos((c*c - a*a)/(-2* c*b));
				break;
		}
		area = h*c/2;
		System.out.println("El triandulo es "+tipo+" con angulos"+a+", "+b+", "+c+" y area "+h);
	}
}
