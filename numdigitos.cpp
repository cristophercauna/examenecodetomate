#include<iostream>
using namespace std;

int contadorDigitos(int n){
	if(n<10){
		return 1;
	}
	return 1 + contadorDigitos(n/10);
	
}

int main(){
	int n;
	cin>>n;
	int dig=contadorDigitos(n);
	cout<<dig;
	return 0;
}