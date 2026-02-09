#include<iostream>
#include<string.h>
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

        // destructor
        ~Student(){
            cout<<"Hi, I delete everything"<<endl;
            delete cgpaPtr;// delete is used to free dynamically allocated memory
                           // becaue destructor free only normal memory
        }

        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"CGPA: "<<*cgpaPtr<<endl;
        }
};
int main(){
    Student s1("Akash", 8.9)  ;
    s1.getInfo();

    return 0;
}