#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int talla, cantidad, costo_unidad, costo_total, precio,utilidad,utilidad_t;
	char referencia[100],descripcion[100], disponibilidad;
	cout << "ADMINISTRAR VENTA DE ZAPATOS \n"<<endl;
	cout << "Digite la referencia del zapato"<<endl;
	cin.getline(referencia,100,'\n');
	cout <<"Digite la descripcion del zapato"<<endl;
	cin.getline(descripcion,100,'\n');
	cout <<"Digite la talla";
	cin >> talla;
	cout<<"digite la letra si esta disponible o no para la venta S/N"<<endl;
	cin >> disponibilidad;
	cout<<"Canidad de zapatos"<<endl;
	cin >> cantidad;
	
	cout<<"digite el costo unidad zapato"<<endl;
	cin>>costo_unidad;
	cout<<"Digita el precio de venta del zapato \n";
	cin >>precio;
	
	
	costo_total = costo_unidad*cantidad;
	utilidad = precio - costo_unidad;
	utilidad_t = utilidad*cantidad;
	
	system("cls");
	
	cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES \n"<<endl;
	cout<<"REFERENCIA: " << referencia<<endl;
	cout<<"DESCRIPCIÓN: "<<descripcion<<endl;
	cout<<"TALLA: "<<talla<<endl;
	cout<<"DISPONIBILIDAD: "<<disponibilidad<<endl;
	cout<<"CANTIDAD DE ZAPATOS: "<<cantidad;
	cout<<"COSTO UNIDAD: "<<costo_unidad<<endl;
	cout<<"COSTO TOTAL: "<<costo_total<<endl;
	cout<<"PRECIO UNIDAD: "<<precio<<endl;
	cout<<"PRECIO TOTAL DE "<<cantidad<<" UNIDADES"<<endl;
	cout<<"UTILIDAD POR UNIDAD: "<<utilidad<<endl;
	cout<<"UTILIDAD TOTAL: "<<utilidad_t<<endl;
	cout<<"\n Gracias por digitar la informacion"<<endl;
		
	system("pause");
	return EXIT_SUCCESS;
	/*Jeisson Jesús Valencia Vallejo*/
}