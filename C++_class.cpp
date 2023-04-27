#include <iostream>
using namespace std;
class Employee{
    public:
        int ini_salary,work_hours;
        void getinfo(){
            cout<<"Enter the initial salary: ";
            cin>>ini_salary;
            cout<<"Enter the working hours per day: ";
            cin>>work_hours;
            cout<<endl<<"The given deatails are: ";
            cout<<"Initial salary: "<<ini_salary;
            cout<<endl<<"Working hours per day: "<<work_hours<<endl;
        }
        void AddSal(){
            if (ini_salary<=500){
                ini_salary=ini_salary+10;
            }
        }
        int AddWork(){
            if (work_hours>=6){
                ini_salary=ini_salary+5;
            }
            return ini_salary;
        }
};

int main(){
    Employee emp1;
    emp1.getinfo();
    emp1.AddSal();
    cout<<"The final salary is: "<<emp1.AddWork();
    return 0;
}
