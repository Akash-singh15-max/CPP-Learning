// Constructor:-
// this is a special pointer in c++ that points to the current object
// this->prop is name as *(this).prop
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

        // Non-parameterized constructor
        Teacher(){
            cout<<"Hi, I am default constructor\n";
            dept = "Computer Science";
        }

        // parameterized constructor
        // using this pointer:-
                              //This pointer is used when the name 
                              // of parameter of object and constructor
                              // is same
        Teacher(string name, string dept, string s, double salary){
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }

        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Department: "<<dept<<endl;
            cout<<"Subject: "<<subject<<endl;
            cout<<"Salary: "<<salary <<endl;
        }
};
int main(){
    Teacher t;
    Teacher t1("Sharadha\3","Computer Science", "C++", 25000)  ;
    t1.getInfo();

    return 0;
}