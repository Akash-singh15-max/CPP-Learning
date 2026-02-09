// Constructor:-
// It has three types:-
// (i) Default / non-parameterized constructor
//(ii) parameterized constructor
//(iii) copy constructor:- special constructor used to copy properties of one object into other.

/*
    Shallow copy and deep copy:-
 -> A shallow copy of an object copies all of the member value from one 
    object to another
 -> A deep copy on the other hand, not only copies the member values
    but also make copies of any dynamically allocated memory that 
    the members point to.
*/
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
        Teacher(string n, string d, string s, double sal){
            cout<<"Hi, I am parameterized constructor...\n";
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }

        // copy constructor
        Teacher(Teacher &orgObj){
            cout<<"I am custom copy constructor...\n";
            this->name = orgObj.name;
            this->dept = orgObj.dept;
            this->subject = orgObj.subject;
            this->salary = orgObj.salary;
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
    Teacher t2(t1);//custom copy constructor
    t2.getInfo();
    return 0;
}