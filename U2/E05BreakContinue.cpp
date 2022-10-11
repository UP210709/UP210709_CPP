#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            continue;
        } else {
            cout << i << endl;
        }
        cout<<"Numero "<< i <<endl;
    }
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        } else {
            cout << i << endl;
        }
        cout<<"Numero "<< i <<endl;
    }
    return 0;
}