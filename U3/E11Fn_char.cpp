#include <iostream>
#include <string.h>
using namespace std;

int nP(char ms[]){
    int nu=0;
    for (int i = 0; ms[i]!='\0' ; i++)
    {
        if(isspace(ms[i])){
            nu++;
        }
    }
    return nu;
}

int main(){
    char mensaje[] = "Hola amigos mios";
    char letra='A';
    char texto[20]= "uNi10veR20siDa41D";
    char texto2[]={'A','D','I','O','S','\0'};

    for (int i = 0; texto[i] != '\0' ; i++)
    {
        cout<<texto[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i]!='a' && texto[i]!='e' && texto[i]!='i' && texto[i]!='o' && texto[i]!='u')
            cout<<texto[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (isdigit(texto[i]))
            cout<<texto[i]<<" ";
    }
    cout <<endl;
    for (int i = 0; texto[i]!='\0'; i++)
    {
        if (isalpha(texto[i]))
        {
            texto[i]=toupper(texto[i]);
            cout<<texto[i]<<" ";
        }
        
    }

    strcat(texto, "  la mejor"); //concatenar
    cout<<endl<<texto<<endl;

    cout<<strchr(texto, ' ')<<endl; //traer substring a partir de un caracter 
    int nu=nP(mensaje);
    cout<<nu;
    return 0;
}