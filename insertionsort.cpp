#include<iostream>
#include<ctime>
using namespace std;

void insertionSort(int A[],int n){
	for(int i=1;i<n;i++){
		int aux = A[i];
		int k=i-1;
		while(k>=0 && aux<A[k]){
			A[k+1] = A[k];
			k = k-1;
		}
		A[k+1] = aux;
	}
}
int main(){
	int n;
	cout<<"Ingrese n: "; cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	clock_t inicio = clock();
	insertionSort(A,n);
	clock_t fin = clock();
	double time = 1000.0 * (fin - inicio) / CLOCKS_PER_SEC;
	cout<<"Arreglo ordenado: "<<endl;
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	cout<<"Tiempo: "<<time<<" ms."<<endl;
	return 0;
}