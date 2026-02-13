#include<iostream>
using namespace std;
int enesimo(int n){
	if(n == 1){
		return 4;
	}
	if(n == 2){
		return 6;
	}
	return enesimo(n-1) + enesimo(n-2);
	
}

int main(){
	int n;
	cin>>n;
	cout<<enesimo(n);
	return 0;
}