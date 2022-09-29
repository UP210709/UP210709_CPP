#include <iostream>
using namespace std;
int main(){
    char letra='A';
    char Letra2='a';
    cout<<"Abecedario en orden ascendente \n";
    for (int i = 0; i < 26; i++)
    {
        cout<<letra<<"\t"<<Letra2<<"\n";
        letra++;
        Letra2++;
    }
    cout<<"\nAbecedario en orden descendente \n";
    letra--;
    Letra2--;
    for (int i = 0; i < 26; i++)
    {
        cout<<letra<<"\t"<<Letra2<<"\n";
        letra--;
        Letra2--;
    }
    cout<<"\nImpresion de numeros de manera ascendente \n";
    for (int t = 1; t <= 10; t++)
    {
        cout<<t<<"\t";
    }
    cout<<"\nImpresion de numeros de manera descendente \n";
    for (int t = 10; t >= 1; t--)
    {
        cout<<t<<"\t";
    }
    return 0;
}