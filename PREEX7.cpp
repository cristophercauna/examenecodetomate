#include<iostream>
#include<string>
using namespace std;
class Temperatura{
    private:
        double celsius;
    public:
        Temperatura(double t=0):celsius(t){}
        Temperatura operator+(const Temperatura& t){
            return Temperatura(celsius + t.celsius);
        }
        Temperatura operator-(const Temperatura& t){
            return Temperatura(celsius - t.celsius);
        }
        Temperatura operator*(double factor){
            return Temperatura(celsius * factor);
        }
        bool operator==(const Temperatura&t)const{
            return celsius==t.celsius;
        }
        bool operator<(const Temperatura&t)const{
            return celsius<t.celsius;
        }
        bool operator>(const Temperatura&t)const{
            return celsius>t.celsius;
        }
        Temperatura operator++(){
            celsius+= 1;
            return *this;
        }
        Temperatura operator--(){
            celsius-= 1;
            return *this;
        }
        friend ostream& operator<<(ostream &out,const Temperatura& t){
            out<<t.celsius<<" C";
            return out;
        }
        friend istream& operator>>(istream &in, Temperatura& t){
            cout<<"Ingrese los grados:  "<<endl;
            in>>t.celsius;
        }   
};

int main(){
    Temperatura t1,t2;
    cout<<"Ingrese temperatura 1: "; cin>>t1;
    cout<<"Ingrese temperatura 2: "; cin>>t2;

    cout<<"\n Resultados\n";
    cout<<" t1 + t2 = "<<t1+t2<<endl;
    cout<<" t1 - t2 = "<<t1-t2<<endl;
    cout<<" t1 * t2 = "<<t1*2<<endl;
    if(t1 == t2) cout<<"Las temperaturas son iguales"<<endl;
    else if(t1>t2) cout<<"t1 es mayor que t2"<<endl;
    else cout <<"t2 es mayor que t2"<<endl;

    return 0;
}