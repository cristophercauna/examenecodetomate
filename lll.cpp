#include<iostream>
using namespace std;
void ordenarRecursivo(int A[],int n){
	if(n == 1){
		return;
	}
	for(int i=0;i<n-1;i++){
		if(A[i]>A[i+1]){
			int aux = A[i];
			A[i] = A[i+1];
			A[i+1] = aux;
		}
	}
	ordenarRecursivo(A,n-1);
}

int main(){
	int n;
	cout<<"Ingrese n: "; cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	ordenarRecursivo(A,n);
	return 0;
}