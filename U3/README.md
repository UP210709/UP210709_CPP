# Codigo de los programas dentro de esta carpeta  
![MadeInAbyss](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Raphtalia.jpg) 

---
---
**Bisección**  
````
#include <iostream>
#include <cmath>
using namespace std;

double FuncionEcuacion1(double x){
    return (pow(x,2)-8*x+15);
}

int main(){
    double x1=-10;
    double x2=4.5;
    double xm,y1,y2;

    double Es=0.00001;
    double Er=abs(x2-x1);
    
    int i=1;
    while (Er>Es){
        xm=(x1+x2)/2;
        y1=FuncionEcuacion1(x1);
        y2=FuncionEcuacion1(xm);
        if (y1*y2 <0 ){
            x2=xm;
        } else {
            x1=xm;
        }
        Er=abs(x2-x1);
        i=i+1;
    }
    cout<<"i = "<<i<<" raiz = "<<xm<<endl;
    cout<<"... Hecho";
    return 0;
}
````
![Ejemplo](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Ejercicio%201%20U2.png)  

---
**Año Bisiesto**  
````
#include <iostream>
using namespace std;

bool Bisiesto(int ano){
    bool r;
    r = ano%400==0 || ano%4==0 && ano%100!=0;
    return r;
}

int main(){
int ano;
cout<<"Ingresa un anio: ";
cin>>ano;
if(Bisiesto(ano)){
    cout<<ano<<" es bisiesto";
} else{
    cout<<ano<<" no es bisiesto";
}
return 0;
}
````
![Ejemplo](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Ejercicio%202%20U2.png)    

---
**Coseno**  
````
#include <iostream>
#include <math.h>
using namespace std;

double G2R(double g){
    double r;
    r=g*M_PI/180;
    return r;
}

long int factorial(int x){
    int factorial=1;
    while (x>0)
    {
        factorial=factorial*x;
        x--;
    }
    return factorial;
}

double coseno(double g, int i){
    double c;
    c=pow(-1,i)*pow(G2R(g),2*i)/(factorial(2*i));
    return c;
}

int main(){
    int g=45;
    double x1=10;
    double Es=0.00001;
    double c=0;

    double Er=x1-c;
    int i=0;

    while(Er>Es){
        x1=c;
        c=c+coseno(g,i);
        Er=abs(x1-c);
        i++;
    }
    cout<<"El coseno de "<<g<<"grados es: "<<c;
    return 0;
}
````  
![Ejemplo](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Ejercicio%203%20U2.png)  

---
**Pizzeria**  
````
#include <iostream>
using namespace std;
int main(){
    int pizza;
    int ingrediente;
    cout<<"Seleccion de ingredientes para la pizza \n";
    cout<<"De que tipo sera tu pizza? \n 1:Vegetariana \t 2:No vegetariana \n";
    cin>>pizza;
    switch (pizza)
    {
    case 1 :
        cout<<"Elige un ingrediente de los siguientes \n";
        cout<<"1:Pimiento \t 2:Tofu \n";
        cin>>ingrediente;
        if (ingrediente==1){
            cout<<"Los ingredientes que tiene tu pizza vegetariana son: mozzarela, tomate y pimiento";
        }
        else if (ingrediente==2){
            cout<<"Los ingredientes que tiene tu pizza vegetariana son: mozzarela, tomate y tofu";
        }
        else{
            cout<<"Opcion invalida";
        }
        break;
    case 2 :
        cout<<"Elige un ingrediente de los siguientes \n";
        cout<<"1:Peperoni \t 2:Jamon \t 3:Salmon \n";
        cin>>ingrediente;
        if (ingrediente==1){
            cout<<"Los ingredientes que tiene tu pizza no vegetariana son: mozzarela, tomate y peperoni";
        }
        else if (ingrediente==2){
            cout<<"Los ingredientes que tiene tu pizza no vegetariana son: mozzarela, tomate y jamon";
        }
        else if (ingrediente==3){
            cout<<"Los ingredientes que tiene tu pizza no vegetariana son: mozzarela, tomate y salmon";
        }
        else{
            cout<<"Opcion invalida";
        }
        break;
    default:
        cout<<"Opcion no valida";
        break;
    }
    return 0;
}
````
![Ejemplo](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Ejercicio%204%20U2.png)   

---
**Temperaturas**  
````
#include <iostream>
using namespace std;
int main(){
    int maximo =0;
    int minimo=0;
    int promedio=0;
    int numero =0;
    int i=0;
    cout<<"Promedio y valor maximo y minimo de las temperaturas \n";
    for (i = 0; i < 6; i++)
    {
        cout<<"Ingresa una temperatura: ";
        cin>>numero;
        if (i==0 || numero > maximo){
            maximo=numero;
        }
        if (i==0 || numero<minimo ){
            minimo=numero;
        }
        promedio=promedio +numero;
    }
    promedio=promedio/6;
    cout<<"El promedio de las temperaturas es: "<<promedio<<endl;
    cout<<"El valor maximo es: "<<maximo<<endl;
    cout<<"El valor minimo es: "<<minimo<<endl;
    return 0;

}
```` 
![Ejemplo](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Ejercicio%205%20U2.png)  

---
**Precios**  
````
#include <iostream>
using namespace std;
int main(){
    cout<<"Total de la compra \n";
    int cantidad=1;
    int total=0;
    int precio;
    do{
        cout<<"Ingresa la cantidad de productos: ";
        cin>>cantidad;
        if (cantidad>0)
        {
            cout<<"Ingresa el precio del articulo: ";
            cin>>precio;
            total=total+(cantidad*precio);
        }
    }while(cantidad != 0);
    cout<<"El total de la compra es de $"<<total;
    return 0;
}
````
![Ejemplo](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Ejercicio%206%20U2.png)  

---
**BinarioADecimal**  
````
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    char binario[30]="";
    int decimal=0;
    int numero=0;
    int contador, i;
    cout<<"Convertir numeros de binario a decimal \n";
    cout<<"Ingresa un numero en binario: ";
    cin>>binario;
    contador=strlen(binario);
    for (int i = 1; i <= contador; i++)
    {
        if (binario[i-1]=='1')
        {
            decimal=pow(2,contador-i);
            numero=numero +decimal;
        }
        
    }
    cout<<numero;
    return 0; 
}
````  
![Ejemplo](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Ejercicio%207%20U2.png)  