#include <iostream>
using namespace std;
int main(){
    string binario="";
    int decimal;
    cout<<"Conversion de decimal a binario \n";
    cout<<"Ingresa un numero en decimal: ";
    cin>>decimal;
    while (decimal>0)
    {
        if (decimal%2==0){
            binario="0"+binario;
        }
        else{
            binario="1"+binario;
        }
        decimal=decimal/2;
    }
    cout<<"El numero en decimal es: "<<binario;
    return 0;
}