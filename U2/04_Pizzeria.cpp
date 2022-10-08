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