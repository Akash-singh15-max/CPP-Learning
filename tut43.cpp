// Ambiguity Resolution
/*
    Ambiguity resolution is used when same function is present in 
    base class and we want to use it in our main function but there 
    is an issue that compiler don't get which function is to be used,
    there comes ambiguity resolution, which we called in derived function
    to tell compiler what function is to be used.
*/
#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho"<<endl;
        }
};

class Derived :public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1 :: greet(); // Here we use Ambiguity resolution 
        }
};
int main(){
    Base1 base1obj;  
    Base2 base2obj;  
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
    return 0;
}