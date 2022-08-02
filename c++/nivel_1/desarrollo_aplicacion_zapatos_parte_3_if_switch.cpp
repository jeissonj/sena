#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int talla, cantidad, costo_unidad, costo_total, precio_unidad,precio_total,utilidad,utilidad_t,porcentaje_utilidad,caso;
	char referencia[100],descripcion[100], disponibilidad[100];
	string tipo;
	cout << "ADMINISTRAR VENTA DE ZAPATOS \n"<<endl;
	cout << "Digite la referencia del zapato"<<endl;
	cin.getline(referencia,100,'\n');
	cout <<"Digite la descripcion del zapato"<<endl;
	cin.getline(descripcion,100,'\n');
	cout <<"Digite la talla";
	cin >> talla;
	cout<<"digite la letra si esta disponible o no para la venta S/N"<<endl;
	cin >> disponibilidad;
	cout<<"Canidad de zapatos disponibles de esta referencia"<<endl;
	cin >> cantidad;
	cout<<"digite el costo unidad zapato"<<endl;
	cin>>costo_unidad;
	
	if(costo_unidad<= 30000)
	{
		caso = 1;
	}
	else if(costo_unidad <= 60000){
		caso = 2;
	}
	else{
		caso = 3;
	}

	
	switch(caso)
	{
		case 1:
			tipo = "A";
			utilidad= costo_unidad/2;
			porcentaje_utilidad=50;
		case 2:
			tipo ="B";
			utilidad= (2*costo_unidad)/5;
			porcentaje_utilidad=40;
		case 3:
			tipo = "C";
			utilidad= (3*costo_unidad)/10;
			porcentaje_utilidad=30;
	}
			
	

	


	costo_total = costo_unidad*cantidad;
	utilidad_t = utilidad*cantidad;
	precio_unidad = costo_unidad + utilidad;
	precio_total = precio_unidad*cantidad;
	
	system("cls");
	
	cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES \n"<<endl;
	cout<<"REFERENCIA: " << referencia<<endl;
	cout<<"TIPO: "<<tipo<<endl;
	cout<<"DESCRIPCIÓN: "<<descripcion<<endl;
	cout<<"TALLA: "<< talla <<endl;
	cout<<"DISPONIBILIDAD: "<<disponibilidad<<endl;
	cout<<"CANTIDAD DE ZAPATOS: "<<cantidad;
	cout<<"COSTO UNIDAD: "<<costo_unidad<<endl;
	cout<<"COSTO TOTAL: "<<costo_total<<endl;
	cout<<"PRECIO UNIDAD: "<<precio_unidad<<endl;
	cout<<"PRECIO TOTAL DE "<<cantidad<<" UNIDADES: "<<precio_total<<endl;
	cout<<"UTILIDAD POR UNIDAD: "<<utilidad<<endl;
	cout<<"UTILIDAD TOTAL: "<<utilidad_t<<endl;
	cout<<"PORCENTAJE UTILIDAD: "<<porcentaje_utilidad;
	cout<<"\n Gracias por digitar la informacion"<<endl;
		
	system("pause");
	return EXIT_SUCCESS;
	/*Jeisson Jesús Valencia Vallejo*/
}