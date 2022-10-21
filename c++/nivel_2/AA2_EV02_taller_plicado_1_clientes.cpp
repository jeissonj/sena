#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(){
    char satisfaccion = 'n';
    do{   
        string productos[10];
        int x;
        cout<<"Que cantidad de productos desea ingresar? "<<endl;
        cin>>x;

        for (int i = 0; i < x; i++){
            cout<<"ingrese el producto "<< i+1<<endl;;
            cin>>productos[i];
        }
        cout<<"Los productos añadidos son "<<endl;
        for (int i = 0; i < x; i++){
            cout<<productos[i]<<endl;
        }
        cout<<"Si se encuentra satisfecho con la lista ingrese s si desea otra lista ingrese otra letra"<<endl;
        cin>>satisfaccion;
    }while (satisfaccion != 's');
    cout<<"Gracias por visitarnos que tenga un exelente dia";

    /*getch();*/

}