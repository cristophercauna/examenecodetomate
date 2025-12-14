#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Empleado{
    protected:
        string nombre;
        double sueldoBase;
    public:
        Empleado(string n,double s):nombre(n),sueldoBase(s){}
        virtual double calcularSueldo()= 0;
        virtual ~Empleado(){}
};

class EmpleadoTiempoCompleto : public Empleado{
    private:
        double bono;
    public:
        EmpleadoTiempoCompleto(string n,double s,double b):Empleado(n,s),bono(b){}
        double calcularSueldo(){
            return sueldoBase+ bono;
        }
};
class Empleadoporhoras : public Empleado{
    private:
        int horas;
        double pagoxhora;
    public:
            Empleadoporhoras(string n, int h,double p):Empleado(n,0),horas(h),pagoxhora(p){}
        double calcularSueldo() override{
            return  horas * pagoxhora;
        }
};


int main(){
    vector<Empleado*> empleados;
    empleados.push_back(new EmpleadoTiempoCompleto("Ana",1500,300));
    empleados.push_back(new Empleadoporhoras("Rogelio",1200,400));
    for(auto e : empleados){
        cout<<e->calcularSueldo()<<endl;
    }
    for(auto e : empleados){
        delete e;
    }
    
    return 0;
}