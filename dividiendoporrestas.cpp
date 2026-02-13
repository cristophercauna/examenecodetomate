#include <iostream>
using namespace std;

int division(int dividendo, int divisor){
    if(dividendo < divisor){
        return 0;  // caso base
    }

    return 1 + division(dividendo - divisor, divisor);
}

int main(){
    int dividendo, divisor;
    cin >> dividendo >> divisor;

    cout << "Cociente: " << division(dividendo, divisor);
}
