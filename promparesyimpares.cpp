#include <iostream>
using namespace std;

void promedioRec(int A[], int n, 
                 int &sumaPares, int &contPares, 
                 int &sumaImpares, int &contImpares) {

    if(n == 0) {
        return; // caso base
    }

    if(A[n-1] % 2 == 0){
        sumaPares += A[n-1];
        contPares++;
    } else {
        sumaImpares += A[n-1];
        contImpares++;
    }

    promedioRec(A, n-1, sumaPares, contPares, sumaImpares, contImpares);
}

int main() {
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int sumaPares = 0, contPares = 0;
    int sumaImpares = 0, contImpares = 0;

    promedioRec(A, n, sumaPares, contPares, sumaImpares, contImpares);

    if(contPares > 0)
        cout << "Promedio pares: " << (double)sumaPares / contPares << endl;
    else
        cout << "No hay numeros pares\n";

    if(contImpares > 0)
        cout << "Promedio impares: " << (double)sumaImpares / contImpares << endl;
    else
        cout << "No hay numeros impares\n";
}
