#include <iostream>
using namespace std;
int main()
{
    int edad;
    cout<<"Rango de edades \n";
    cout<<"Ingresa tu edad: ";
    cin>>edad;
    if(edad>0 && edad<151)
    {
        if (edad<31)
        {
            cout<<"Primera edad";
        }
        else if (edad<61)
            {
                cout<<"Segunda edad";    
            }
        else if (edad<91)
            {
                cout<<"Tercera edad";
            }
        else
            {
                cout<<"Horas extras :3";
            }
    }
    else
    {
        cout<<"La edad no esta dentro del rango permitido";
    }
    return 0;
}