#include <iostream>
using namespace std;

int menorV(int x[],int N){
    int menor;
    for (int i = 0; i < N; i++)
    {
        if (x[i]<menor || i==0)
        {
            menor=x[i];
        }      
    }
    return menor;
}

int mayorV(int x[],int N){
    int mayor;
    for (int i = 0; i < N; i++)
    {
        if (x[i]>mayor || i==0)
        {
            mayor=x[i];
        }
    }
    return mayor;
}

int mayor2(int x, int y){
    int mayor;
    mayor = (x>y) ? x :  y ;
    return mayor;
}

float promedio(int calificaciones[]){
    float promedio=0;
    int i=5;
    for (int j = 0; j < i; j++)
    {
        promedio=promedio+calificaciones[j];
    }
    promedio=promedio/i;
    return promedio;
}

int main(){
    int cal[5]={10,9,-8,7,6};
    
    int n=5;
    
    int cal2[]={10,5,6,8,7};

    int menor=menorV(cal, n);
    int mayor=mayorV(cal,n);
    int mayonesa=mayor2(4,5);
    
    cout<<"Menor = "<<menor<<endl;
    cout<<"Mayor = "<<mayor<<endl;
    cout<<"Mayor = "<<mayonesa<<endl;
    /*
    cout<<promedio(cal)<<endl;
    cout<<promedio(cal2)<<endl;
    return 0;
    */
}