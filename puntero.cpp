#include<iostream>
using namespace std;
int main(){
	int i=10;
	int *p;
	p = &i;
	cout<<*p<<endl;
	*p = *p +5;
	cout<<*p<<endl;
	cout<<&p;
	return 0;
}