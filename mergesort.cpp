#include <iostream>
using namespace std;

void merge(int a[], int ini, int mid, int fin) {
    int n1 = mid - ini + 1;
    int n2 = fin - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[ini + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = ini;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int ini, int fin) {
    if (ini < fin) {
        int mid = (ini + fin) / 2;
        mergeSort(a, ini, mid);
        mergeSort(a, mid + 1, fin);
        merge(a, ini, mid, fin);
    }
}

int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    int a[n];

    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    cout << "Arreglo ordenado:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
