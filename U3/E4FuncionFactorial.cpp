#include <iostream>
using namespace std;

long int factorial(int x){
    int factorial=1;
    while (x>0)
    {
        factorial=factorial*x;
        x--;
    }
    return factorial;
}

long int permutacion(int n, int r){
    int permutacion=0;
    permutacion=(factorial(n))/(factorial(n-r));
    return permutacion;
}

long int combinacion(int n, int r){
    int combinacion=0;
    combinacion=(permutacion(n,r))/factorial(r);
    return combinacion;
} 

double euler(){
    double euler=0.0;
    for (int i = 0; i < 30; i++)
    {
        euler=euler+(1.0/factorial(i));
    }
    return euler;
}

int main(){
    int x;
    cout<<"Funcion factorial, permutacion y combinacion"<<endl;
    cout<<"Factorial: "<<factorial(0)<<endl;
    cout<<"Permutacion: "<<permutacion(5,2)<<endl;
    cout<<"Combinacion: "<<combinacion(5,2)<<endl;
    cout<<"Numero de euler: "<<euler()<<endl;
    return 0;
}