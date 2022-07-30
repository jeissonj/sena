/*Area de figuras gemetricas*/
#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int a,b,r;
	/*rectangulo*/
	cout<<"Area del Rectángulo \n"<<endl;
	cout<<"Ingrese la base ";
	cin >> a;
	cout<<"Ingrese la altura "<<endl;
	cin >> b;
	r=a*b;
	cout<<"El area del rectangulo es "<<r<<endl;
	system("pause");
	system("cls");
	/*triangulo*/
	cout<<"Area del Triangulo \n"<<endl;
	cout<<"ingrese el valor de la base "<<endl;
	cin>>a;
	cout<<"ingrese el valor de la altura"<<endl;
	cin>>b;
	r=(a*b)/2;
	cout<<"El area del triangulo es"<<r<<endl;
	system("pause");
	system("cls");
	/*rombo*/
	cout<<"Area del rombo \n"<<endl;
	cout<<"Ingrese la diagonal mayor"<<endl;
	cin >>a;
	cout<<"Ingrese la diagonal menor"<<endl;
	cin>>b;
	r=(a*b)/2;
	cout<<"El area del rombo es "<<r<<endl;
	system("pause");
	system("cls");
	/*paralelogramo*/
	cout<<"Area del paralelogramo \n"<<endl;
	cout<<"Ingrese la base";
	cin >> a;
	cout<<"Ingrese la altura"<<endl;
	cin >> b;
	r=a*b;
	cout<<"El area del paralelogramo es "<<r<<endl;
	system("pause");
	system("cls");
	/*trapecio*/
	cout<<"Area del trapecio\n"<<endl;
	cout<<"Ingrese la primera base"<<endl;
	cin>>a;
	cout<<"Ingrese la segunda base"<<endl;
	cin>>b;
	cout<<"Ingrese la altura"<<endl;
	cin>>r;
	r = ((a*b)/2)*r;
	cout<<"El valor del paralelogramo es "<<r<<endl;
	system("pause");
	system("cls");
	/*circulo*/
	cout<<"Area del circulo \n"<<endl;
	cout<<"Ingrese el valor del radio "<<endl;
	cin>>a;
	r=M_PI*(a*a);
	cout<<"El area del circulo es "<<r<<endl;
	
}