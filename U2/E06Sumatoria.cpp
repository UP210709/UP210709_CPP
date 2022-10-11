#include <iostream>
using namespace std;
int main(){
    int n=10;
    int suma=0;
    while(n>0){
        suma=suma+n;
        n--;
    }
    cout<<suma;
    return 0;
}