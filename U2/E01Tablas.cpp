#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i;
    cout<<"Tabla de multiplicar hecha con for \n";
    for (i = 1; i <= 10; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    cout<<"\nTabla de multiplicar de manera decreciente \n";
    for (i = 10; i > 0; i--)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    cout<<"\nTabla de multiplicar hecha con while \n";
    i=1;
    while(i<=10){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
    cout<<"\nTabla de multiplicar hecha con do while \n";
    i=1;
    do
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    } while (i<=10);
    return 0;
}