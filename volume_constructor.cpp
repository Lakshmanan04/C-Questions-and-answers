#include <iostream>
using namespace std;
class Volume{
    public:
        Volume(double s=0.00){
            side=s;
        }
        double cube_volume(){
            return side*side*side;
        }
    private:
        double side;
};
int main(){
    double a;
    cout<<"Enter the length of the cube: ";
    cin>>a;
    Volume v1(a);
    cout<<"The volume of the cube is: "<<v1.cube_volume();
    return 0;
}
