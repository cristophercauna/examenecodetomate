#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void llenarAleatorio(int A[],int n,int maxVal){
	for(int i=0;i<n;i++){
		A[i] = rand() % maxVal;
	}
}
void copiarArreglo(int src[],int dst[],int n){
	for(int i=0;i<n;i++) dst[i] = src[i]; 
}
void bubbleSort(int A[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;i++){
			if(A[j]>A[j+1]){
				int aux=A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}
		}
	}
	
	
}
void SelectionSort(int A[], int n){
	for(int i=0;i<n-1;i++){
		int minPos = i;
		for(int j=i+1;j<n;j++){
			if(A[j]<A[minPos]){
				minPos = j;
			}
		}
		int tmp = A[i];
		A[i] = A[minPos];
		A[minPos] = tmp;
	}
	
	
} 
void insertionSort(int A[],int n){
	for(int i=1;i<n;i++){
		int aux = A[i];
		int k = i-1;
		while(k>=0 && aux<A[k]){
			A[k+1] = A[k];
			k--;
		}
		A[k+1] = aux;
	}
}
int sumaar(int A[],int n){
	if(n == 0){
		return n;
	}
	return A[n-1] + sumaar(A,n-1);
}
void leerAr(int A[],int n){
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
}
int main(){
	srand(time(NULL));
	int n;
	cout<<"Ingrese n: "; cin>>n;
	int A[n];
	leerAr(A,n);
	cout<<sumaar(A,n);
	/*
	int *base = new int[n];
	int *a = new int[n];
	llenarAleatorio(base,n,1000000);
	copiarArreglo(base,a,n);
	clock_t inicio = clock();
	insertionSort(a,n);
	clock_t fin = clock();
	double ms = 1000.0 * (fin - inicio) / CLOCKS_PER_SEC;
	cout<<"tiempo: "<<ms<< " ms."<<endl;
	*/
	
	return 0;
}