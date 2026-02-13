#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Figura{
    public:
        virtual double area()const = 0;
        virtual void imprimir(ostream& os)const = 0;
        friend ostream& operator<<(ostream &os,const Figura& f){
            f.imprimir(os);
            return os;
        }
        virtual ~Figura(){}
};
class Rectangulo: public Figura{
    private:
        double base,altura;
    public:
        Rectangulo(double b, double a):base(b),altura(a){}
        double area()const override{
            return base * altura;
        }
        void imprimir(ostream& os) const override{
            os<<" Rectangulo [base="<<base<<", altura="<<altura<<", area="<<area()<<"]"<<endl;
        }
};
class Circulo: public Figura{
    private:
        double radio;
    public: 
        Circulo(double r):radio(r){}
        double area() const override{
            return 3.14159 * radio * radio;
        }
        void imprimir(ostream& os) const override{
            os<<" Circulo [radio ="<<radio<<"^2 "<<" * "<<"pi ="<<area()<<"]"<<endl;
        }
};
int main(){
    vector<Figura*> figuras;
    figuras.push_back(new Circulo(3));
    figuras.push_back(new Rectangulo(4,3));
    for(auto f: figuras)
        cout<<*f<<endl;
    for(auto f:figuras)
        delete f;
    return 0;
}