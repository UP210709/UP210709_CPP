#include <iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    while (n>=0)
    {
        if(n==0){
            i=i*1;
        }else{
            i=i*n;
        }
        n--;
    }
    cout<<i;
    return 0;
}