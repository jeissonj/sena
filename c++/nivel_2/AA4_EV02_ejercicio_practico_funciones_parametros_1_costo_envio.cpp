#include <iostream>
#include <conio.h>
using namespace std;

void costoEnvio(float);

int main(){
    float peso;
    cout<<"Ingrese el peso del envio en kg"<<endl;
    cin>>peso;
    costoEnvio(peso);
    
    return 0;
}

void costoEnvio(float p){
    int costo = 0;
    if (p <= 10){
        costo = 28000;
    }else if (p <= 50){
        costo = 34000 + ( 1600 * (p - 10) ); 
    }else{
       costo = 60000 + (1900 * (p-50));
    }
    
    cout<<"El costo de envio es "<<costo<<endl;
}
