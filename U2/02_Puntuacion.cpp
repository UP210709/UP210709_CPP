#include <iostream>
using namespace std;
int main() {
    float pun;
    cout << "Evaluacion del empleado en base a su puntuacion \n",
        cout << "Ingresa tu puntuacion: ";
    cin >> pun;
    if (pun == 0.0f || pun == 0.4f || pun >= 0.6f) {
        if (pun == 0.0f) {
            cout << "Tu nivel es inaceptable y tu puntuacion final es de :"
                 << pun << endl;
        } else if (pun == 0.4f) {
            cout << "Tu nivel es aceptable y tu puntuacion final es de :" << pun
                 << endl;
        } else if (pun >= 0.6f) {
            cout << "Tu nivel es meritorio y tu puntuacion final es de :" << pun
                 << endl;
        }
        cout << "El bono que recibiras sera de $" << 2400 * (pun);
    } else {
        cout << "Puntuacion no valida :3";
    }
    return 0;
}