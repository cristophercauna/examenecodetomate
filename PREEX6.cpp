#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Racional{
    private:
        int numerador;
        int denominador;
        void simplificar(){
            int a = numerador;
            int b=denominador;
            while (b!=0){
                int t= b;
                b= a%b;
                a=t;
            }
            int gcd = a;
            numerador /= gcd;
            denominador /= gcd;
            if(denominador<0){
                numerador *= -1; 
                denominador *= -1; 
            }
        }
    public:
        Racional(int n=0,int d=1):numerador(n),denominador(d){
            simplificar();
        }
        Racional operator+(const Racional& r){
            return Racional(numerador *r.denominador+ denominador*r.numerador, denominador*r.denominador);
        }
        Racional operator-(const Racional& r){
            return Racional(numerador *r.denominador - denominador*r.numerador, denominador*r.denominador);
        }
        Racional operator*(const Racional& r){
            return Racional(numerador*r.numerador, denominador* r.denominador);
        }
        Racional operator/(const Racional& r){
            return Racional(numerador*r.denominador,denominador*r.numerador);
        }
        bool operator==(const Racional& r){
            return numerador*r.denominador == denominador*r.numerador;
        }
        bool operator>(const Racional& r){
            return numerador * r.denominador > denominador * r.numerador;
        }
        bool operator<(const Racional& r){
            return numerador * r.denominador < denominador * r.numerador;
        }
        friend ostream& operator<<(ostream& os,const Racional& r){
            os<<r.numerador<<"/"<<r.denominador;
            return os;
        }
        friend istream& operator>>(istream& is, Racional& r){
            cout<<"Ingrese el numerador: "; is>>r.numerador;
            cout<<"Ingrese el denominador: "; is>>r.denominador;
            r.simplificar();
            return is;
        }
};

int main(){
    Racional r1,r2;
    cout<<"Racional 1"<<endl;
    cin>>r1;
    cout<<"Racional 2"<<endl;
    cin>>r2;
    cout<<"\n Operaciones: \n";
    cout << "r1 + r2 = " << r1 + r2 << endl;
    cout << "r1 - r2 = " << r1 - r2 << endl;
    cout << "r1 * r2 = " << r1 * r2 << endl;
    cout << "r1 / r2 = " << r1 / r2 << endl;

    if (r1 == r2) cout << "r1 es igual a r2\n";
    else if (r1 > r2) cout << "r1 es mayor que r2\n";
    else cout << "r1 es menor que r2\n";

}