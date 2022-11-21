#include <iostream>
using namespace std;

bool Bisiesto(int ano){
    bool r;
    r = ano%400==0 || ano%4==0 && ano%100!=0;
    return r;
}

int main(){
int ano;
cout<<"Ingresa un anio: ";
cin>>ano;
if(Bisiesto(ano)){
    cout<<ano<<" es bisiesto";
} else{
    cout<<ano<<" no es bisiesto";
}
return 0;
}