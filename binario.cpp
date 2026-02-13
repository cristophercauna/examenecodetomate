#include<iostream>
using namespace std;
void binario(int n){
	if(n < 2){
		cout<<n;
	}else{
		binario(n/2);
		cout<<n%2;
	}
}
int main(){
	int n;
	cin>>n;
	cout<<"Binario: "<<endl;
	binario(n);
	return 0;
}