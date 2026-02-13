#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Animal{
    public:
        virtual void hablar() const = 0;
        virtual void imprimir(ostream& os) const {
            os<<"Animal generico ";
        }
        friend ostream& operator<<(ostream& os,Animal& a){
            a.imprimir(os);
            return os;
        }
        virtual ~Animal();
};
class Perro : public Animal{
    public:
        void hablar()const override{
            cout<<"Guau"<<endl;
        }
        void imprimir(ostream& os) const override{
            os<<"Soy un perro";
        }

};
class Gato:public Animal{
    public:
        void hablar()const override{
            cout<<"Miau miau"<<endl;
        }
        void imprimir(ostream& os){
            os<<"Soy un gato";
        }
};
int main(){
    vector<Animal*> animales;
    animales.push_back(new Perro());
    animales.push_back(new Gato());
    for(Animal* a : animales){
        cout<<*a<<endl;
        a -> hablar();
    }
    return 0;
}