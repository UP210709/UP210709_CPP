#include <iostream>
using namespace std;

string Invertir(string p){
int x= p.length();
for (int i = 0; i <= x; i++)
{
    if (islower(p[i]))
    {
        p[i]=toupper(p[i]);
    } else {
        p[i]=tolower(p[i]);
    }
}
return p;
}

char* voltear(char* p){
int i=0;
while (p[i] != '\0'){
        if (islower(p[i]))
    {
        p[i]=toupper(p[i]);
    } else {
        p[i]=tolower(p[i]);
    }
    i++;
}
return p;
} 

int main(){
    char* txt; 
    char pa[20]="";
    string palabra,palabra2;
    cout<<"Ingresa una palabra: ";
    cin>>pa;
    palabra=pa;
    palabra2=Invertir(palabra);
    txt=voltear(pa);
    cout<<palabra2<<endl;
    cout<<txt;
    return 0;
}