#include<iostream>
using namespace std;
void Reduce(int[],int,int);
void quicksort(int[],int);
int main(){
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
void quicksort(int arr[], int n){
    Reduce(arr,0,n-1);
}
void Reduce(int arr[], int inicio ,int final){
    int izq = inicio;
    int der = final;
    int pos = izq;
    int cen = 1;
    while(cen == 1){
        cen = 0;
        while(arr[pos]<= arr[der] && pos != der){
            der--;
        }
        if ( pos != der){
            int aux = arr[pos];
            arr[pos] = arr[der];
            arr[der]= aux;
            pos = der;
                while(arr[pos] >= arr[izq] && pos != izq){
                    izq++;
                }
                if(pos != izq){
                    aux = arr[pos];
                    arr[pos]=arr[izq];
                    arr[izq]= aux;
                    pos = izq;
                    cen = 1;
            } 
        }
       if(pos - 1 > inicio)
       Reduce(arr,inicio,pos-1); 
       if(pos + 1 < final)
       Reduce(arr,pos+1,final);
    }
}