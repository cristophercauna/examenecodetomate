#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Vector2D{
    private:
        double x;
        double y;
    public:
        Vector2D(double x=0,double y=0): x(x),y(y){}
        Vector2D operator+(const Vector2D& V){
            return Vector2D(x+V.x , y+V.y);
        }
    friend ostream& operator<<(ostream& ,const Vector2D& );
};
ostream& operator<<(ostream& os,const Vector2D& V){
    os<<"("<<V.x<<","<<V.y<<")";
    return os;
}
int main(){
    Vector2D v1(4,5), v2(8,6),v3;
    v3=v1 + v2;
    cout<<v3;
    return 0;
}