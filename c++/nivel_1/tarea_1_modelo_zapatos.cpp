#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int talla, costo, precio;
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
	cout<<"digite el costo del zapato"<<endl;
	cin>>costo;
	cout<<"Digita el precio de venta del zapato \n";
	cin >>precio;
	
	system("cls");
	
	cout<<"REFERENCIA: " << referencia<<endl;
	cout<<"DESCRIPCIÓN: "<<descripcion<<endl;
	cout<<"TALLA: "<<talla<<endl;
	cout<<"DISPONIBILIDAD: "<<disponibilidad<<endl;
	cout<<"PRECIO: "<<precio<<endl;
	cout<<"\n Gracias por digitar la informacion"<<endl;
		
	system("pause");
	return EXIT_SUCCESS;
}