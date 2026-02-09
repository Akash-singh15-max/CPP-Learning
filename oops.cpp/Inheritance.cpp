// Inheritance:- When properties and member functions of base class
              // are passed on to the derived class.

#include<iostream>
#include<string.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    // // default constructor
    // Person(){
    //     cout<<"Parent Constructor...\n";
    // }

    // parameterized constructor
    Person(string name, int age){
        this->name = name; 
        this->age = age;
    }
    ~Person(){
        cout<<"Parent Distructor...\n";
    }
};
class Student:public Person{
    // name, age, rollNo;
    public:
        int rollNo;
        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Roll NO: "<<rollNo<<endl;
        }
        Student(string name, int age, int rollNo): Person( name,  age){
            cout<<"Child Constructor...\n";
            this->rollNo = rollNo;
        }
        ~Student(){
            cout<<"Child Distructors...\n";
        }
};
int main(){
    Student s1("Akash_kr_singh", 20, 10);
    
    s1.getInfo();

    return 0;
}