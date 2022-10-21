#include <iostream>
#include <conio.h>
using namespace std;

/* informacion  cédula, nombres, teléfono, cargo y salario básico*/
string datos[5][10];

/* horas extras laboradas, valor de la hora extra, descuentos por préstamos, ahorro voluntario, descuentos por seguridad social*/
float informacion_labor[5][10];

float sueldoLibre[5];

void pedirInformacion(int x);
void diligenciarInformacion(int x);
void valorPagar(int x);
void mostrarInformacion(int x);

int main(){
    int tamanho;
    float pagar;
    cout<<"Ingrese el tamaño de la nomina "<<endl;
    cin>>tamanho;
    pedirInformacion(tamanho);
    diligenciarInformacion(tamanho);
    valorPagar(tamanho);
    mostrarInformacion(tamanho);
}

void pedirInformacion( int x){
    for (int i = 0; i < x; i++){
        cout<<"Empleado "<<i+1<<endl;
        cout<<"Cédula "<<endl;
        cin>>datos[0][i];
        cout<<"nombres "<<endl;
        cin>>datos[1][i];
        cout<<"telefono "<<endl;
        cin>>datos[2][i];
        cout<<"cargo "<<endl;
        cin>>datos[3][i];
        cout<<"salario "<<endl;
        cin>>datos[4][i];
    }   
}

void diligenciarInformacion(int x){
    for (int i = 0; i < x; i++){
        cout<<"Empleado "<<i+1<<endl;
        cout<<"horas extras laboradas "<<endl;
        cin>>informacion_labor[0][i];
        cout<<"valor de la hora extra "<<endl;
        cin>>informacion_labor[1][i];
        cout<<"descuentos por préstamos "<<endl;
        cin>>informacion_labor[2][i];
        cout<<"ahorro voluntario "<<endl;
        cin>>informacion_labor[3][i];
        cout<<"descuentos por seguridad social "<<endl;
        cin>>informacion_labor[4][i];
    }
}

void valorPagar(int x){
    for (int i = 0; i < x; i++){
        sueldoLibre[i] = stoi(datos[4][i]) + (informacion_labor[0][i]*informacion_labor[1][i]) - informacion_labor[2][i] - informacion_labor[3][i] - informacion_labor[4][i];
    }
    
}

void mostrarInformacion(int x){
    for (int i = 0; i < x; i++){
        cout<<"Para el empleado " <<i+1<<endl;
        cout<<"Salario basico "<< datos[4][i]<<endl;
        cout<<"Remuneración por horas extras "<<informacion_labor[0][i]*informacion_labor[1][i]<<endl;
        cout<<"descuentos por préstamos "<<informacion_labor[2][i]<<endl;
        cout<<"ahorro voluntario "<<informacion_labor[3][i]<<endl;
        cout<<"descuentos por seguridad social "<<informacion_labor[4][i]<<endl;
        cout<<"Salario final "<<sueldoLibre[i]<<endl;
    }
    
}