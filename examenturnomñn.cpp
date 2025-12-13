#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Reserva;
class Date{
    public:
        int dia;
        int mes;
        int anio;
        Date(int d=0,int m=0 ,int a=0){
            dia=d;
            mes=m;
            anio=a;
        }
};

class Cliente{
    private:
        vector<Reserva*> reservas;
    public:
        string idcliente;
        string nombres;
        string DNI;
        string celular;
        Cliente(string idcli="00000",string noms = "nada",string dni="00000000",string cel="0000000");
        void agregarReserva(Reserva* r);
        vector<Reserva*> getReservas();
};
class Habitacion{
    public:
        string idhabitacion;
        string numeropuerta;
        int capacidad;
        double precioxnoche;
        int estadohab;
        Habitacion(string idhab="000",string numpue="0",int cap=0,double precioxnoch=0.00,int esthab=0);
        bool esdisponible();
        void actualizarestado(int);
};

class Reserva{
    private:
        Habitacion* habitacion;
        Cliente* cliente;
    public:
        string idreserva;
        Date fechainicio;
        Date fechasalida;
        int estadoreserva;
        double montotal;
        Reserva(Cliente* c,Habitacion* h ,string idre,Date fI,Date fS,int esRe,double mtot);
        void modificarestado(int);
        void calcularMontoTotal();
        Cliente* getCliente();
        Habitacion* gethabitacion();
};
Reserva::Reserva(Cliente* c, Habitacion* h,string idre, Date fI, Date fS,int esRe, double mtot){
    cliente = c;
    habitacion = h;
    idreserva = idre;
    fechainicio = fI;
    fechasalida = fS;
    estadoreserva = esRe;
    montotal = mtot;
}

void Reserva::modificarestado(int estado){
    estadoreserva= estado;
}
void Reserva::calcularMontoTotal(){
        int dias = fechasalida.dia-fechainicio.dia;
        if(dias<1) dias=1;
        montotal= dias * habitacion->precioxnoche;
}
Cliente* Reserva::getCliente(){
    return cliente;
}
Habitacion* Reserva::gethabitacion(){
    return habitacion;
}
// FUNCIONES DE CLIENTE
Cliente::Cliente(string idcli, string noms, string dni, string cel){
    idcliente = idcli;
    nombres = noms;
    DNI = dni;
    celular = cel;
}
void Cliente::agregarReserva(Reserva* r){
    reservas.push_back(r);
}
vector<Reserva*> Cliente::getReservas(){
    return reservas;
}
// ------
//FUNCIONES DE HABITACION
Habitacion::Habitacion(string idhab,string numpue,int cap,double precioxnoch, int esthab){
    idhabitacion=idhab;
    numeropuerta=numpue;
    capacidad=cap;
    precioxnoche=precioxnoch;
    estadohab=esthab;
}
bool Habitacion::esdisponible(){
    return estadohab ==1;
}
void Habitacion::actualizarestado(int ace){
    estadohab=ace;
}
//-----------
class Hotel{
    private:
        vector<Habitacion> habitaciones;
    public:
        string nombre;
        string idhotel;
        Hotel(string nomh="nd",string idhot="000");
        void agregarHabitacion(Habitacion h);
};
Hotel::Hotel(string nomh,string idhot){
    nombre=nomh;
    idhotel=idhot;
}
void Hotel::agregarHabitacion(Habitacion h){
    habitaciones.push_back(h);
}

int main(){
    Hotel hotel("Continental la de john wick xd","012514");
    Habitacion h1("HAB01", "101", 2, 120.0, 1);
    Habitacion h2("HAB02", "102", 3, 150.0, 1);
    Habitacion h3("HAB03", "103", 1, 90.0, 0);
    Habitacion h4("HAB04", "104", 4, 200.0, 1);
    hotel.agregarHabitacion(h1);    
    hotel.agregarHabitacion(h2);    
    hotel.agregarHabitacion(h3);    
    hotel.agregarHabitacion(h4);      
    return 0;
}