#include<iostream>
using namespace std;

void insertionSort(int A[],int n){
	for(int i=0;i<n-1;i++){
		int minPos=i;
		for(int j=i+1;j<n;j++){
			if(A[j]<A[minPos]){
				minPos=j;
			}
		}
		int aux = A[i];
		A[i] = A[minPos];
		A[minPos] = aux;
	}
}

int main(){
	int n;
	cout<<"Ingrese n: "; cin>>n;
	int A[n];
	cout<<"Ingrese elementos de A[n]: "<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	insertionSort(A,n);
	cout<<"Arreglo ordenado: "<<endl;
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
	return 0;
}