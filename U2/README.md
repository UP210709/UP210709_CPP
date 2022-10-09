# Codigo de los programas dentro de esta carpeta  
![Raphtalia](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Raphtalia.jpg) 

---
---
**Tramos**  
````
#include <iostream>
using namespace std;
int main(){
    int renta, impuesto;
    cout<< "Impuestro correspondiente en base a su renta \n";
    cout<< "Ingrese su renta: ";
    cin>> renta;
    if (renta < 10000){
        impuesto=renta*.05;
    }
    else if(renta < 20000){
        impuesto=renta*.15;
    }
    else if (renta < 35000){
        impuesto=renta*.2;
    }
    else if (renta < 60000){
        impuesto=renta*.3;
    }
    else{
        impuesto=renta*.45;
    }
    cout<<"El impuesto correspondiente es de "<<impuesto;
}
````
![Ejemplo](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Ejercicio%201%20U2.png)  

---
**Puntuación**  
````
#include <iostream>
using namespace std;
int main(){
    float pun;
    cout<<"Evaluacion del empleado en base a su puntuacion \n",
    cout<<"Ingresa tu puntuacion: ";
    cin >> pun;
    pun=pun*10;
    if (pun==0 || pun==4 || pun>=6)  {
        if (pun==0.0){
            cout<<"Tu nivel es inaceptable y tu puntuacion final es de :"<<pun/10<<endl;
        }
        else if(pun==0.4){
            cout<<"Tu nivel es aceptable y tu puntuacion final es de :"<<pun/10<<endl;
        }
        else if(pun>=0.6){
            cout<<"Tu nivel es meritorio y tu puntuacion final es de :"<<pun/10<<endl;
        }
        cout<<"El bono que recibiras sera de $"<<2400*(pun/10);
    } 
    else{
        cout<<"Puntuacion no valida :3";
    }
    return 0;
}
````
![Ejemplo](https://github.com/UP210709/UP210709_CPP/blob/main/U1/Imagenes/Ejercicio%202%20U2.png)    

---
**Juegos**  
````
#include <iostream>
using namespace std;
int main (){
    int edad;
    cout<<"Calculo del precio en base a la edad \n";
    cout<<"Ingresa tu edad: ";
    cin>>edad;
    if (edad>0 && edad <4){
        cout<<"Tu entrada es gratis :3";
    }
    else if(edad>=4 && edad<=18){
        cout<<"Tu entrada tiene un costo de $5";
    }
    else if(edad>18){
        cout<<"Tu entrada tiene un costo de $10";
    }
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