#include <iostream>
using namespace std;
int main(){
    cout<<"Total de la compra \n";
    int cantidad=1;
    int total=0;
    int precio;
    do{
        cout<<"Ingresa la cantidad de productos: ";
        cin>>cantidad;
        if (cantidad>0)
        {
            cout<<"Ingresa el precio del articulo: ";
            cin>>precio;
            total=total+(cantidad*precio);
        }
    }while(cantidad != 0);
    cout<<"El total de la compra es de $"<<total;
    return 0;
}