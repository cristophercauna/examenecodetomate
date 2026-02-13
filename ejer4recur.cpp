#include<iostream>
using namespace std;
int mayor(int A[],int n){
	if(n == 1){
		return A[0];
	}
	int m = mayor(A,n-1);
	if(A[n-1]>m){
		return A[n-1];
	}else{
		return m;
	}
	
}
int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int ma=mayor(A,n);
	cout<<ma<<endl;
	return 0;
}