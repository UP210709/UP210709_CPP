#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    char binario[30]="";
    int decimal=0;
    int numero=0;
    int contador, i;
    cout<<"Convertir numeros de binario a decimal \n";
    cout<<"Ingresa un numero en binario: ";
    cin>>binario;
    contador=strlen(binario);
    for (int i = 1; i <= contador; i++)
    {
        if (binario[i-1]=='1')
        {
            decimal=pow(2,contador-i);
            numero=numero +decimal;
        }
        
    }
    cout<<numero;
    return 0; 
}