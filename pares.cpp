#include<iostream>
using namespace std;
void pares(int A[],int n){
	if(n <= 0){
		return;
	}
	if((n-1) % 2== 0){
		cout<<A[n-1]<<" ";
	}
	pares(A,n-1);
	
}

int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	pares(A,n);
	return 0;
}