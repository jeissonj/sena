#include <iostream>
#include <conio.h>
using namespace std;

void aumento(float&, int);

int main(){
    float salario;
    int anhos;
    cout<<"Ingrese el salario "<<endl;
    cin>>salario;
    cout<<"Años de antiguedad del empleado"<<endl;
    cin>>anhos;
    cout<<"Salario actual: "<<salario<<endl;
    aumento(salario, anhos);
    cout<<"El salario el proximo año sera: "<<salario<<endl;

    return 0;
}


void aumento(float& s, int a){
    if (a < 5){
        s = s * 1.06;
    }else if(a < 10){
        s = s * 1.08;
    }else{
        s = s * 1.1;
    }
    
}