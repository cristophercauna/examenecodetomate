#include <chrono>
#include <iostream>
#include <vector>
using namespace std;
void Reduce(vector<long long>& arr,long long, long long);
void quicksort(vector<long long>& arr,long long);
int main(){
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
chrono:: steady_clock::time_point begin = chrono:: steady_clock::now();
quicksort(arr,n);
chrono:: steady_clock::time_point end = chrono:: steady_clock:: now();
cout<<"Time difference = ";
cout<<chrono:: duration_cast<chrono::milliseconds>(end - begin).count()<<"[ms]"<<endl;
cout<<"Time difference = ";
cout<<chrono:: duration_cast<chrono::microseconds> (end - begin).count()<<"[us] "<<endl;
cout<<"Time difference = ";
cout<<chrono:: duration_cast<chrono:: nanoseconds> (end - begin).count()<< "[ns]" <<endl;
    for(long long i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
void quicksort(vector<long long>& arr, long long n){
    Reduce(arr,0,n-1);
}
void Reduce(vector<long long>& arr, long long inicio ,long long final){
    long long izq = inicio;
    long long der = final;
    long long pos = izq;
    int cen = 1;
    while(cen == 1){
        cen = 0;
        while(arr[pos]<= arr[der] && pos != der){
            der--;
        }
        if ( pos != der){
            long long aux = arr[pos];
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