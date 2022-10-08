#include <iostream>
using namespace std;
int main(){
    float pun;
    cout<<"Evaluacion del empleado en base a su puntuacion \n",
    cout<<"Ingresa tu puntuacion: ";
    cin >> pun;
    if (pun==0.0 || pun==0.4 || pun>=0.6)  {
        if (pun==0.0){
            cout<<"Tu nivel es inaceptable y tu puntuacion final es de :"<<pun<<endl;
        }
        else if(pun==0.4){
            cout<<"Tu nivel es aceptable y tu puntuacion final es de :"<<pun<<endl;
        }
        else if(pun>=0.6){
            cout<<"Tu nivel es meritorio y tu puntuacion final es de :"<<pun<<endl;
        }
        cout<<"El bono que recibiras sera de $"<<2400*pun;
    } 
    else{
        cout<<"Puntuacion no valida :3";
    }
    return 0;
}