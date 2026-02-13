#include<iostream>
using namespace std;

void imagen(int n){
    if(n ==0)
        return;
    cout<<n%10;
    imagen(n/10);
}

int main(){
    int n;
    cin >> n;
    imagen(n);
    return 0;
}