#include<iostream>
#include<vector>
using namespace std;
class Empleado{
    protected:
        double salariobase;
    public:
        Empleado(double sb = 0): salariobase(sb){}
        virtual double calcularSalario() const =0;
        Empleado& operator+(double bono){
            this->salariobase+bono;
            return *this;
        }
        virtual void imprimir(ostream& os)const {
            os<<"Salario base: "<<salariobase;  
        }
        friend ostream& operator<<(ostream& os,const Empleado& e){
            e.imprimir(os);
            return os;
        }
        virtual ~Empleado();
};
class EmpleadoTiempoCompleto:public Empleado{
    public:
        EmpleadoTiempoCompleto(double s):Empleado(s){}
        double calcularSalario()const override{
            return salariobase; 
        }
        void imprimir(ostream& os)const {
            os<<"Empleado tiempo completo| Salario: "<<calcularSalario();
        }
};
class Empleadoxhora : public Empleado{
    private:
        double horas;
    public:
        Empleadoxhora(double pagoxhora,double h=0):Empleado(pagoxhora),horas(h){}
        double calcularSalario() const override{
            return salariobase * horas;
        }
        void imprimir(ostream& os)const{
            os<<"Empleado por hora| Salario: "<<calcularSalario();
        }
};
int main(){
    vector<Empleado*> empleados;
    empleados.push_back(new EmpleadoTiempoCompleto(5000));
    empleados.push_back(new Empleadoxhora(20,60));
    for (Empleado* e:empleados){
        *e + 200;
        cout<<*e<<endl;
    }
    for(Empleado* e: empleados){
        delete e;
    }



    
}