#include <iostream>
using namespace std;
int main(){
    int maximo =0;
    int minimo=0;
    int promedio=0;
    int numero =0;
    int i=0;
    cout<<"Promedio y valor maximo y minimo de las temperaturas \n";
    for (i = 0; i < 6; i++)
    {
        cout<<"Ingresa una temperatura: ";
        cin>>numero;
        if (i==0 || numero > maximo){
            maximo=numero;
        }
        if (i==0 || numero<minimo ){
            minimo=numero;
        }
        promedio=promedio +numero;
    }
    promedio=promedio/6;
    cout<<"El promedio de las temperaturas es: "<<promedio<<endl;
    cout<<"El valor maximo es: "<<maximo<<endl;
    cout<<"El valor minimo es: "<<minimo<<endl;
    return 0;

}