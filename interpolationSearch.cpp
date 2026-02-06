#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high && x >= arr[low] && x <= arr[high]) {

        if (arr[high] == arr[low])
            break;

        int pos = low + ((double)(x - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        if (arr[pos] == x)
            return pos;

        if (arr[pos] < x)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1;
}

int main() {
    int n, x;

    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    int arr[n];

    cout << "Ingrese los elementos ordenados:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Ingrese el valor a buscar: ";
    cin >> x;

    int resultado = interpolationSearch(arr, n, x);

    if (resultado != -1)
        cout << "Elemento encontrado en la posicion: " << resultado << endl;
    else
        cout << "Elemento no encontrado" << endl;

    return 0;
}