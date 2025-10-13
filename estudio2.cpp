#include<iostream>
using namespace std;
int hallarn(int);
int main(){
    int n;
    cin>>n;
    cout<<hallarn(n);
    return 0;
}
int hallarn(int n){
    if(n==1)
    return 4;
    if(n==2)
    return 6;
    return hallarn(n-1) + hallarn(n-2);
}