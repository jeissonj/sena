#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int parametros[5];
float areas[4];

void declaracionVariables();
void calculoAreas();
void mostrarAreas();

int main(){
    
    cout<<"Calculo de area de figuras geometricas "<<endl;
    declaracionVariables();
    calculoAreas();
    mostrarAreas();
}

void declaracionVariables(){

    cout<<"Las figuras geometricas son circulo, triangulo equilatero, cuadrado y rectangulo "<<endl;
    cout<<"Ingrese radio del circulo "<<endl;
    cin>>parametros[0];
    cout<<"Ingrese altura del triangulo equilatero "<<endl;
    cin>>parametros[1];
    cout<<"Ingrese lado del cuadrado "<<endl;
    cin>>parametros[2];
    cout<<"Ingrese lado 1 del rectangulo "<<endl;
    cin>>parametros[3];
    cout<<"Ingrese lado 2 del rectangulo "<<endl;
    cin>>parametros[4];
}

void calculoAreas(){
    areas[0] = 3.14*pow(parametros[0],2);
    areas[1] = sqrt(3)*pow(parametros[1],2)/4;
    areas[2] = pow(parametros[2],2);
    areas[3] = parametros[3]*parametros[4];
}

void mostrarAreas(){

    cout<<"area del circulo "<<areas[0]<<endl;
    cout<<"Area triangulo equilatero "<<areas[1]<<endl;
    cout<<"area del cuadrado "<<areas[2]<<endl;
    cout<<"Area del rectangulo "<<areas[3]<<endl;   
}