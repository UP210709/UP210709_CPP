#include <iostream>
using namespace std;
int main(){
    char texto[30]="poliTecnicA";
    string cadena="universidad";
    int longitud=cadena.length();
    int i,cantidad=0,cantidad2=0;
    for (i = 0; i < longitud; i++)
    {
        if (cadena[i]=='i')
        {
            cantidad++;
        }
        cout<<cadena[i]<<endl;
    }
    cout<<"\nLa palabra universidad cuenta con "<<cantidad<<" vocales i"<<endl<<endl;
    cantidad=0;
    i=0;
    while (texto[i] != '\0'){
        cout<<texto[i]<<" ";
        i++;
    }
    for ( i = 0; i < 30; i++)
    {
        cout<<endl<<texto[i];
        if (isupper(texto[i]))
        {
            cantidad++;
        }else if(islower(texto[i])){
            cantidad2++;
        }    
    }
    cout<<"La cantidad de mayusculas es de: "<<cantidad<<endl;
    cout<<"La cantidad de minusculas es de: "<<cantidad2<<endl;
    i=0;
    while (texto[i] != '\0')
    {
       if (islower(texto[i]))
       {
        texto[i]=toupper(texto[i]);
       }
       else{
        texto[i]=tolower(texto[i]);
       } 
       i++; 
    }
    cout<<endl<<texto;
    //if(isalpha(texto[0]))
    //isdigit   isalnum     isspace     islower     isupper     tolower     toupper
    return 0;
}