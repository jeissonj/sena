// 1.recibir notas para los estudiantes de tres materias y una vez obtenidas, calcular el promedio del grupo por materia.
// 2.primera matemáticas y el promedio debe ser calculado utilizando un ciclo de repetición for.
// 3.segunda español y el promedio debe ser calculado utilizando un ciclo de repetición while.
// 4.tercera inglés y el promedio debe ser calculado utilizando un ciclo de repetición do while.
// 5.recibir, materia a la cual se le generará el cálculo. acuerdo a la selección efectuada, debe pasar a ejecutar el respectivo proceso utilizando una instrucción switch.
// 6.En un documento de Microsoft Word o en la herramienta de procesamiento de textos de su 
// preferencia, incluya las respuestas a las preguntas planteadas en la actividad llamada: Reflexionar 
// sobre la importancia del uso de ciclos de repetición.
import java.util.Scanner;
public class Main{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int i, cm, ce, ci, cambio;
		float nota, nota_m, nota_e, nota_i, promedio_m,promedio_e,promedio_i;
		nota_m = 0;
		nota_e = 0;
		nota_i = 0;
		String materia_1 = "matemáticas";
		System.out.println("Ingrese la cantidad de notas de "+materia_1);
		cm = s.nextInt();
		for (i = 1;i<=cm ;i++ ) {
			System.out.println("Ingrese nota "+i);
			nota = s.nextFloat();
			nota_m += nota;
		}
		promedio_m = nota_m/cm;
		String materia_2 = "Español";
		System.out.println("Ingrese la cantidad de notas de "+materia_2);
		ce = s.nextInt();
		i=1;
		while(i<=ce){
			System.out.println("Ingrese nota "+i);
			nota = s.nextFloat();
			nota_e += nota;
			i++;
		}
		promedio_e = nota_e/ce;
		String materia_3 = "Ingles";
		System.out.println("Ingrese la cantidad de notas de "+materia_3);
		ci = s.nextInt();
		i=1;
		do{
		System.out.println("Ingrese nota "+i);
		nota = s.nextFloat();
		nota_i += nota;
		i++;
		}while(i<=ci);
		promedio_i = nota_i/ci;
		System.out.println("EL pormedio de "+materia_1+" es "+promedio_m+" el promedio de "+materia_2+" es "+promedio_e+" el promedio de "+materia_3+" es "+promedio_i);
	}
}