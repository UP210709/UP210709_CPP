#include <iostream>
using namespace std;

int doble(int a){
    int r;
    r=a+a;
    return r;
}

int sumatoria(int p){
    int suma=0,i;
    for(i=p;i>=0;i--){
        suma=suma+i;
    }
    return suma;
} 

int main(){
int x=5;
int r =doble(x);
cout<<r<<endl;
int s=sumatoria(10);
cout<<s;
}