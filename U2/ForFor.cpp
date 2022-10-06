//Objetivo: For anidados
#include <iostream>
using namespace std;
int main(){
    int i,n;
    for (i = 1; i <= 10; i++)
    {
        for ( n = 1; n <= 10; n++)
        {
            cout<<i<<" * "<<n<<" = "<<i*n<<endl;
        }
        cout<<endl;
    }
}