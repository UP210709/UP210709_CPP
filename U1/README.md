# Codigo de los programas dentro de esta carpeta
**Hola mundo**  
````
#include <iostream>
using namespace std;
int main(){
    cout<<"Hola mundo :3"<<endl;
    system("pause");
    return 0;
}
````  
**ParImpar**
````
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<" Par o impar "<<"\n"<<endl;
    cout<<"Ingresa un numero: ";
    cin>>n;
    if (n%2==0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }
    return 0;
}
````  
**TiposDatos**
````
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
````  
**Ciclos**
````
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
    printf("La suma total es de %d",suma);
    return 0;
}
````  
**Edades**
````
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
````  
![Si](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Si.jpg) 