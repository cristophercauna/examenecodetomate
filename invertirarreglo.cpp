#include<iostream>
using namespace std;
void cambio(int A[],int inicio,int fin){
	if(inicio>=fin){
		return;
	}
	int aux = A[inicio];
	A[inicio] = A[fin];
	A[fin] = aux;
	cambio(A,inicio+1,fin-1);
}

int main(){
	int n;
	cout<<"Ingrese n: "; cin>>n;
	int A[n];
	cout<<"Ingrese elementos de arreglos: "<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<"Arreglo invertido: "<<endl;
	cambio(A,0,n-1);
	for(int i=0;i<n;i++){
		cout<<A[i]<<" , ";
	}
	return 0;
}