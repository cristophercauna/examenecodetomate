#include<iostream>
using namespace std;
double promAr(double A[],int n,int suma,int total){
	if(n==0){
		return (double)suma/total;
	}
	return promAr(A,n-1,suma+A[n-1],total);
}


int main(){
	int n;
	cin>>n;
	double A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<promAr(A,n,0,n);
	return 0;
}