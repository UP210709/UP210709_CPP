#include <iostream>
using namespace std;
int main (){
    int edad;
    cout<<"Calculo del precio en base a la edad \n";
    cout<<"Ingresa tu edad: ";
    cin>>edad;
    if (edad>0 && edad <4){
        cout<<"Tu entrada es gratis :3";
    }
    else if(edad>=4 && edad<=18){
        cout<<"Tu entrada tiene un costo de $5";
    }
    else if(edad>18){
        cout<<"Tu entrada tiene un costo de $10";
    }
    return 0;
}