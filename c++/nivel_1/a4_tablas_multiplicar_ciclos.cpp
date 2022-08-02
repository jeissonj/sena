#include <iostream>
using namespace std;
int main(){
	int contador, tabla;
	contador = 1;
	while(contador <= 10){
		cout<<"Tabla del "<< contador<<endl;
		contador = contador + 1;
	}
	cout<<"Seleccione una tabla de multiplicar"<<endl;
	cin >> tabla;
	cout<<"La tabla de multiplicar es \n";
	contador = 0;
	do{
		contador = contador + 1;
		cout << tabla << " * "<< contador << " = " << tabla*contador << endl;
	}while(contador < 10);
	
	system("pause");
	return EXIT_SUCCESS;
}