#include<iostream>
using namespace std;

void imprime(int n){
	if(n == 0){
		return;
	}
	imprime(n-1);
	cout<<n<<" ";
}

int main(){
	int n;
	cin>>n;
	imprime(n);
	return 0;
}