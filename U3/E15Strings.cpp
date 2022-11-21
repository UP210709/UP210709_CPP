#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[]="sida";
    string texto="Universidad UPA";
    string texto2("HolA");
    string texto3;

    cout<<"Contenido: "<<texto<<endl;
    cout<<"Length:  "<<texto.length()<<endl;
    cout<<"Compare:  "<<texto.compare("universidad")<<endl;
    cout<<"Find:  "<<texto.find("a")<<endl;
    cout<<"Substr:  "<<texto.substr(6,4)<<endl;
    cout<<"Find_last:  "<<texto.find_last_of("i")<<endl;
    cout<<"Replace:  "<<texto.replace(6,5,"vih")<<endl;
    texto=texto+".";
    cout<<"Concatenar: "<<texto<<endl;
    texto.clear();
    cout<<"Clear:    "<<texto<<endl;
    texto.swap(texto2);
    cout<<"Swap:  "<<texto<<endl;

    for (int i=texto.length(); i >= 0; i--)
    {
        texto3=texto3+texto[i];
    }
    cout<<"Reverse:  "<<texto3<<endl;
    

    int b=5;
    int c=7;
    int d;
    d=b;
    b=c;
    c=d;
    return 0;
}