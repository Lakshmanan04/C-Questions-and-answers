#include <iostream>
#include <math.h>
using namespace std;
class Shape{
    protected:
    int length;
    int breadth;
    int height;
};
class rectangle:public Shape{
    public:
    rectangle (int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
       return length*breadth;
    }
    int p;
    int peri(){
        p=2*(length+breadth);
        return p;
    }
    
};
class square:public Shape{
    public:
    square (int s){
        length=s;
    }
    int area(){
       return length*length;
    }
    int p;
    int peri(){
        p=4*length;
        return p;
    }
    
};
class triangle:public Shape{
    public:
    triangle (int b,int h){
        breadth=b;
        height=h;
    }
    int p;
    int area(){
       return 0.5*breadth*height;
    }
    int peri(){
        p=2*(sqrt((height*height)+(breadth*breadth)/4))+breadth;
        return p;
    }
    
};
class circle:public Shape{
    public:
    circle (int r){
        length=r;
    }
    int area(){
       return 3.14*length*length;
    }
    int p;
    int peri(){
        p=2*3.14*length;
        return p;
    }
    
};
class parallelogram:public Shape{
    public:
    parallelogram (int l,int b,int h){
        length=l;
        breadth=b;
        height=h;
    }
    int area(){
       return breadth*height;
    }
    int p;
    int peri(){
        p=2*(length+breadth);
        return p;
    }
    
};
class fencing:public rectangle,public square,public triangle,public circle,public parallelogram{
    public:
    int cost(){
        return p*50; 
    }
};
int main(){
    int l,b,h;
    cout<<"enter length:";
    cin>>l;
    cout<<"enter breadth:";
    cin>>b;
    cout<<"enter heigth:";
    cin>>h;
    rectangle r(l,b);
    square s(l);
    triangle t(b,h);
    circle c(l);
    parallelogram p(l,b,h);
    cout<<r.area()<<" "<<r.peri()<<endl;
    cout<<s.area()<<" "<<s.peri()<<endl;
    cout<<t.area()<<" "<<t.peri()<<endl;
    cout<<c.area()<<" "<<c.peri()<<endl;
    cout<<p.area()<<" "<<p.peri()<<endl;
    return 0;
}
