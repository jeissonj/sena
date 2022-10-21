#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(){
    int x;
    char s_n;
    do{
        cout<<"Qué cantidad de porductos desea agregar"<<endl;
        cin>>x;
        /*cantidad, valor unitario y descuento */
        float datos[3][x];
        for (int i = 0; i < x; i++){    
            cout<<"Ingrese la cantidad del producto "<<i+1<<endl;
            cin>>datos[0][i];
            cout<<"Ingrese el valor unitario del producto "<<i+1<<endl;
            cin>>datos[1][i];
            cout<<"Ingrese el descuento del producto "<<i+1<<endl;
            cin>>datos[2][i];
        }
        cout<<"La información presentada por el usuario es"<<endl;
        for (int i = 0; i < x; i++)
        {
            cout<<"Producto "<<i+1<<" cantidad "<<datos[0][i]<<" Valor unitario "<<datos[1][i]<<" descuento "<<datos[2][i]<<endl;
        }
        cout<<"Desea calcular el valor total de la compra de cada producto con su descuento ingrese s de lo contrario indique cualquier letra "<<endl;
        cin>>s_n;
        if(s_n=='s'){
            for (int i = 0; i < x; i++){
                cout<<"Producto "<<i+1<<" valor total "<<(datos[0][i]*datos[1][i])-(datos[0][i]*datos[2][i])<<endl;
            }   
        }
        cout<<"Desea regresar al paso anterior y generar una nueva lista ingrese s de lo contrario marque cualquier letra"<<endl;
    }while (s_n=='s');
    
}