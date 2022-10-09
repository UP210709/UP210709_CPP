#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int SumarIm = 0;
    int sumaPar =0;
    int suma;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            sumaPar=sumaPar+i;
        }
        else
        {
            SumarIm=SumarIm+i;
        }
    }
    suma=sumaPar+SumarIm;
    printf("La suma de pares es %d \n",sumaPar);
    printf("La suma de impares es %d \n",SumarIm);
    printf("La suma total es de %d \n",suma);
    return 0;
}