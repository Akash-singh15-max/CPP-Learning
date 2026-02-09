#include<iostream>
using namespace std;
class Parent{
    public:
        void getInfo(){
            cout<<"Parent class\n";
        }
        virtual void hello(){
            cout<<"Hello from par"<<endl;
        }
};
class Child:public Parent{
    public:
        void getInfo(){
            cout<<"Hello from child class"<<endl;
        }
};
int main(){
    Parent p1;
    p1.getInfo()  ;

    Child c1;
    c1.getInfo();
    return 0;
}