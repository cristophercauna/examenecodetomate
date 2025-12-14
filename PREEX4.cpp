#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string n="nd",int e=0):nombre(n),edad(e){}
        friend ostream& operator<<(ostream& os, const Persona& p);
        friend istream& operator>>(istream& in, Persona& p);
};
ostream& operator<<(ostream& os, const Persona& p){
    os<<"Nombre| : "<<p.nombre<<" Edad|: "<<p.edad;
    return os;
}
istream& operator>>(istream& is, Persona& p){
    cout<<"INGRESE EL NOMBRE: ";
    getline(is,p.nombre);
    cout<<"INGRESE LA EDAD: ";
    is>>p.edad;
    is.ignore();
    return is;
}

int main(){
    Persona p;
    cin>>p;
    cout<<p;
    return 0;
}