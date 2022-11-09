#include <iostream>
#include <time.h>
using namespace std;
#define co 4
#define Fi 4

void imprimir(int A[][co]){
    for (int i = 0; i < Fi; i++)
    {
        for (int j = 0; j < Fi; j++)
        {
            cout<<A[i][j]<<"\t";
            
        }
        cout<<endl;
    }
}

void llenarM(int a[Fi][co]){
    int contador=1;
    for (int i = 0; i < Fi; i++)
    {
        for (int j = 0; j < co; j++)
        {
            a[i][j]=contador;
            contador ++;
        }   
    }
}

void ImprimirD(int a[Fi][co]){
    for (int i = 0; i < co; i++)
    {
        cout<<a[i][i]<<"\t";
    }
    cout<<endl;
}

void ImprimirS(int a[Fi][co], int suma[Fi]){
    for (int i = 0; i < Fi; i++)
    {
        for (int j = 0; j < co; j++)
        {
            suma[i]=suma[i]+a[i][j];
        }
        cout<<suma[i]<<"\t";
    }
    cout<<endl;
}

void ImprimirSC(int a[Fi][co], int suma[Fi]){
    for (int i = 0; i < Fi; i++)
    {
        for (int j = 0; j < co; j++)
        {
            suma[i]=suma[i]+a[j][i];
        }
        cout<<suma[i]<<"\t";
    }
    cout<<endl;
}

void Transpuesta(int a[Fi][co],int b[Fi][co]){
    for (int i = 0; i < Fi; i++)
    {
        for (int j = 0; j < co; j++)
        {
            b[i][j]=a[j][i];
        }
    }
    cout<<endl;
}

int main(){
   /* 
    int matriz[2][3];
    matriz[1][2]=6;
    int f=2;
    int c=3;
    int i,j;
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout<<"Ingresa el valor de la fila "<<i+1<<" columna "<<j+1<<" : ";
            cin>> matriz[i][j];
        }
        
    }    
   int n=4;
    int matriz2[][co]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int m=1;
    imprimir(matriz2);
    */

    int matriz3[Fi][co];
    int matriz4[Fi][co];
    int suma[Fi]={0,0,0,0};
    int suma2[Fi]={0,0,0,0};
    llenarM(matriz3);
    imprimir(matriz3);
    ImprimirD(matriz3);
    ImprimirS(matriz3,suma);
    ImprimirSC(matriz3,suma2);
    Transpuesta(matriz3, matriz4);
    imprimir(matriz4);
    return 0;
}