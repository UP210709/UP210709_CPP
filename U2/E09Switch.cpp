#include <iostream>
using namespace std;
int main() {
    int a, b, c, o;
    cout << "Switch" << endl;

    cout << "\nIngresa el valor de A:";
    cin >> a;
    cout << "Ingresa el valor de B:";
    cin >> b;
    do {
        cout << "\nSelecciona la operacion a realizar\n0:Salir \t 1:Suma \t "
                "2:Resta \t 3:Multiplicacion \t 4:Division \n";
        cin >> o;
        switch (o) {
            case 1:
                c = a + b;
                cout << "El resultado de la suma es de :" << c<<endl;
                break;
            case 2:
                c = a - b;
                cout << "El resultado de la resta es de :" << c<<endl;
                break;
            case 3:
                c = a * b;
                cout << "El resultado de la multiplicacion es de :" << c<<endl;
                break;
            case 4:
                if (b != 0) {
                    c = a / b;
                    cout << "El resultado de la division es de :" << c<<endl;
                } else {
                    cout << "No se puede dividir entre 0"<<endl;
                }
                break;
            default:
                if(o!=0)
                cout << "Opcion invalida"<<endl;
                break;
        }
        //case 1 ... 30:    Rango de valores
        //case 'a'  Tipo caracter
    } while (o != 0);
    return 0;
}