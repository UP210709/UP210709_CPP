#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char*apt;
    char texto[10]= "UPA ";
    strcat(texto, " la mejor");
    cout<<texto<<endl;

    strcpy(texto,"ISC");
    cout<<texto<<endl;
   // apt=strchr(texto, ' ');
//    strcat(texto,apt);
    return 0;
}