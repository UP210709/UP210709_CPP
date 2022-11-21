#include <iostream>
#include <time.h>
#define f 2
#define c 3
using namespace std;

int verificar(int cal[], int v){
    int na=0;
    for (int i = 0; i < v; i++)
    {
        (cal[i]!=cal[v])?  : na++;
    }
    return na;
}

int main(){
    srand(time(NULL));
    /*
    int n;
    int matriz[f][c];
    int matrizt[c][f];
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            n=21+rand()%(10);
            matriz[i][j]=n;
            matrizt[j][i]=n;
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"Matriz transpuesta"<<endl<<endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            cout<<matrizt[i][j]<<"\t";
        }
        cout<<endl;
    }
    */
   int cal[5];
   int vuel=5;
   int ca;
   int ve;
   for (int i = 0; i < vuel; i++)
   {
        do{
            ca=0+rand()%(11);
            cal[i]=ca;
            ve=verificar(cal,i);
        }while(ve!=0);
   }
   for (int i = 0; i < vuel; i++)
   {
        cout<<cal[i]<<"\t";
   }
    return 0;
}