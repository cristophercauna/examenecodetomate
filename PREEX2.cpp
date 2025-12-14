#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Vehiculo{
    protected:
        string marca;
        int anio;
    public:
        Vehiculo(string m,int a):marca(m),anio(a){}
        virtual void mostrarinfo() = 0;
        virtual ~Vehiculo() {}
};

class Auto: public Vehiculo{
    private:
        int numpuertas;
    public:
        Auto(string m,int a, int p):Vehiculo(m,a),numpuertas(p){}
        void mostrarinfo() override{
            cout<<"Auto"<<marca<<"-"<<anio<<"-"<<"puertas: "<<numpuertas<<endl;
        }
};

class Moto: public Vehiculo{
        protected:
            int cilindrada;
        public:
            Moto(string m,int a,int c):Vehiculo(m,a), cilindrada(c){}
            void mostrarinfo() override{
                cout<<"Moto"<<marca<<"-"<<anio<<"-"<<cilindrada<<" cc"<<endl;
            }
};
int main(){
    vector<Vehiculo*> vehiculos;
    vehiculos.push_back(new Auto("toyota",2006,4));
    vehiculos.push_back(new Moto("Yamaha",2006,600));
    for(auto v : vehiculos){
        v->mostrarinfo();
    }
    for(auto v: vehiculos)
        delete v;
    return 0;
}