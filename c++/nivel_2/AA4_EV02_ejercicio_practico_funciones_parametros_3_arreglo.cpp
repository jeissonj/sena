#include <iostream>
#include <conio.h>
using namespace std;

void agregarElementos(int, int&);
void mostrarArreglo(int, int);
void elevarArreglo(int&, int);

int main(){
    int arr[10];
    int cant;
    cout<<"Ingrese la antidad de elementos del arrglo tipo entero"<<endl;
    cin>>cant;
    agregarElementos(cant, arr[10]);
    cout<<"El arreglo es"<<endl;
    mostrarArreglo(arr[10], cant);
    elevarArreglo(arr[10], cant);
    cout<<"El arreglo con cada uno de sus terminos elevado al cuadrado queda de la forma "<<endl;
    mostrarArreglo(arr[10], cant);

    return 0;
}


void agregarElementos(int c, int& a[10]){
    for (int i = 0; i < c; i++){
        cout<<"ingrese el elemento "<<i+1<<" del arreglo"<<endl;
        cin>>a[i];
    }
}


void mostrarArreglo(int a[10], int c){
    for (int i = 0; i < c; i++){
        cout<<a[i]<<" "<<endl;
    }
}


void elevarArreglo(int& a[10], int c){
    for (int i = 0; i < c; i++){
        a[i] = a[i]*a[i]; 
    }
}



