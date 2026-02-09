// Learning oops concept by Shradha ma'am
#include<iostream>
#include<string.h>
using namespace std;
class Teacher {
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;
    
        void changeDept(string newDept){
            dept = newDept;
        }

        // setter
        double setSalary(double s){
            salary = s;
        }

        // getter
        double getSalary(){
            return salary;
        }
};
int main(){
    Teacher t1;
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(25000);
    
    cout<<t1.name<<"\3"<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.getSalary();

    return 0;
}