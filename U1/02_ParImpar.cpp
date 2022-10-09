#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<" Par o impar "<<"\n"<<endl;
    cout<<"Ingresa un numero: ";
    cin>>n;
    if (n%2==0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }
    return 0;
}