#include <iostream>
using namespace std;
class Area{
    public:
        Area(double l=0.00,double b=0.00){
            length=l;
            breadth=b;
        }
        double rectangle_area(){
            return length*breadth;
        }
    private:
        double length;
        double breadth;
};
int main(){
    double a,b;
    cout<<"Enter the length: ";
    cin>>a;
    cout<<"Enter the breadth: ";
    cin>>b;
    Area a1(a,b);
    cout<<"The area of the rectangle: "<<a1.rectangle_area();
    return 0;
}
