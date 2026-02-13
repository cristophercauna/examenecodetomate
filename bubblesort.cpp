#include<iostream>
using namespace std;

void bubblesort(int A[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				int aux= A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}
		}
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
	bubblesort(A,n);
	cout<<"Arreglo ordenado: "<<endl;
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
	return 0;
}