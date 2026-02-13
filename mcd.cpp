#include<iostream>
using namespace std;
int mcd_iterativo(int a,int b){
	while(b!=0){
		int r= a%b;
		a=b;
		b=r;
	}
	return a;
}
int mcd_recursivo(int a,int b){
	if(b==0)
		return a;
	return mcd_recursivo(b,a%b);
}
int main(){
	int a,b;
	cout<<"Ingrese los dos numeros ENTEROS: "; cin>>a>>b;
	cout<<"MCD (FORMA ITERATIVA): "<<mcd_iterativo(a,b)<<endl;
	cout<<"MCD (FORMA RECURSIVA): "<<mcd_recursivo(a,b)<<endl;
	
	return 0;
}