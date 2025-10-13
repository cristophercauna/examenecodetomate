#include<iostream>
using namespace std;
int sumaarreglo(int,int []);
int main(){
    int n,suma=0;
    int A[1000000];
    for(int i=0;i<n;i++)
    cin>>A[i];
    suma=sumaarreglo(n,A);
    cout<<suma;
    return 0;
}
int sumaarreglo(int n,int A[]){
    if(n==1){
        return A[0];
    }
        return A[n-1] + sumaarreglo(n-1,A);
}