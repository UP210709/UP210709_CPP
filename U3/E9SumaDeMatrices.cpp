#include <iostream>
using namespace std;
#define F 4
#define C 4

void llenarM(int a[F][C]){
    int contador=1;
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            a[i][j]=contador;
            contador ++;
        }   
    }
}

void imprimir(int A[][C]){
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout<<A[i][j]<<"\t";
            
        }
        cout<<endl;
    }
}

int main(){
    int x[F][C];
    int y[F][C];
    int suma[F][C];
    int n=4;
    int p=0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suma[i][j]=x[i][j]+y[i][j];
        }
    }
    
    return 0;
}