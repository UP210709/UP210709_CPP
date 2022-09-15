/*
    Unidad 1. Tipos de datos
    Autor:Aarón Quiñones Martínez
    Fecha: 15/09/2022
    Descripción: Muestra de los diferentes tipos de datos en c++
*/
#include <iostream>
#include <stdio.h>

#define PI 3.1416
const float pi = 3.1415;

using namespace std;
int main()
{
    int unsigned entero = 2147483647;
    float flotante = 31416e-4;
    double grande = 2.565465654654;
    char caracter = 72;

    cout<<"Este programa muestra los tipos de datos. \n";
    cout<<"El numero entero es: "<<entero<<endl;
    cout<<"El tamaño del entero es: "<<sizeof(entero)<<" bytes \n";
    cout<<"El número flotante es: "<<flotante<<endl;
    cout<<"EL tamaño del flotante es: "<<sizeof(flotante)<<" bytes \n";
    cout<<"El caracter char es: "<<caracter<<endl;
    cout<<"El tamaño del char es: "<<sizeof(caracter)<<endl;
    cout<<"El valor de Pi es: "<<pi<<endl;

    getchar();
    return 0;
}