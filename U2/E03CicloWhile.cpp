#include<iostream>
using namespace std;
int main(){
    int n,i;
    char opcion='s';
    while (opcion=='s')
    {
    cout<<"Ingresa un numero: ";
    cin>>n;  
    i=1;
    do
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        i++;
    } while (i<=10);
    cout<<"Deseas otro <s/n>";
    cin>>opcion;  
    }
    cout<<"... Hecho";
    return 0;
}