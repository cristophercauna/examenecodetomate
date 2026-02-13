#include<iostream>
using namespace std;

int sumaAr(int A[],int n){
	if(n == 0){
		return n;
	}
	return A[n-1] + sumaAr(A,n-1);
}
void leerAr(int A[],int n){
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
}
int main(){
	int n;
	cin>>n;
	int A[n];
	leerAr(A,n);
	cout<<"Suma de elementos del arreglo: "<<sumaAr(A,n)<<endl;
}