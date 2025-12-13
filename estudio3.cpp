#include<iostream>
using namespace std;
void voltearnum(int);
int main(){
    int num;
    cin>>num;
    voltearnum(num);
    return 0;
}
void voltearnum(int num){
    cout<<num%10;
    if(num>=10){
        voltearnum(num/10);
    }
    
}