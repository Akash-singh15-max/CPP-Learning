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
using namespace std;
class Student{
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        // // shallow copy
        // Student(Student &obj){
        //     this->name = obj.name;
        //     this->cgpaPtr = obj.cgpaPtr;
        // }

        // Deep copy
        Student(Student &obj){
            this->name = obj.name;
            cgpaPtr = new double;
            *cgpaPtr = *obj.cgpaPtr;
        }

        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"CGPA: "<<*cgpaPtr<<endl;
        }
};
int main(){
    Student s1("Akash kumar", 8.9)  ;
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.name = "Neha";
    s2.getInfo();
    return 0;
}