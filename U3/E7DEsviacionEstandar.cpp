#include <iostream>
using namespace std;
 
 double media(double x[],int n){
    double media=0;
    for (int i = 0; i < n; i++)
    {
        media=media+x[i];
    }
    media=media/n;
    return media;
 }

 double desviacion(double x[], int n){
    double me= media(x,n);

    return 0;
 }

 int main(){
    double numeros[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    cout<<media(numeros,n);
    return 0;
 }