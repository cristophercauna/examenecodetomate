#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Punto2D{
    private:
        double x;
        double y;
    public:
        Punto2D(double x=0,double y=0):x(x),y(y){}
        friend ostream& operator<<(ostream& os,Punto2D& p);
        friend istream& operator>>(istream& is,Punto2D& p);
        Punto2D operator+(const Punto2D& p) const{
            return Punto2D(x + p.x , y + p.y);
        }
        Punto2D operator-(const Punto2D& p) const{
            return Punto2D(x - p.x , y - p.y);
        }
        Punto2D operator*(double escalar) const{
            return Punto2D(x*escalar , y*escalar);
        }
        bool operator==(const Punto2D& p){
            return x == p.x && y==p.y;
        }
        bool operator<(const Punto2D& p){
            return (x*x + y*y) < (p.x*p.x + p.y*p.y);
        }
        bool operator>(const Punto2D &p) const {
            return (x*x + y*y) > (p.x*p.x + p.y*p.y);
        }

        
};
ostream& operator<<(ostream& os, Punto2D& p){
    os<<"Puntos x|: "<<p.x<<" Punto y|: "<<p.y;
    return os;
}
istream& operator>>(istream& is, Punto2D& p){
    cout<<"Ingrese el primer punto: "; is>>p.x;
    cout<<"Ingrese el segundo punto: "; is>>p.y;
    return is;
}
int main(){
    Punto2D p1,p2;
    cin>>p1;
    cin>>p2;
    Punto2D p3=p1+p2;
    Punto2D p4=p1-p2;
    Punto2D p5=p1*3;
    cout<<"Suma : "<<p3<<endl;
    cout<<"Resta : "<<p4<<endl;
    cout<<"Escalar : "<<p5<<endl;
    if(p1==p2) cout<<"Los puntos son iguales. "<<endl;
    else if(p1>p2) cout<<"El punto p1 es mayor que p2 . "<<endl;
    else cout<<"El punto p2 es mayor que p1 . "<<endl;
    
    return 0;
}