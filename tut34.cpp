// Copy constructors ---->

#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){a=0;}
        Number(int num){
            a = num;
        }

        //When no copy constructors is found, compilers supplies its own copy constructors.
        Number(Number &obj){
            cout<<"Copy constructors called"<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"The number of this digit is "<<a<<endl;
        }
};
int main(){
    Number x(69),y,z,z2;
    x.display();
    y.display();
    z.display();
    //z1 should exactly resemble z or x or y
    Number z1(x);//copy constructors invoked
    z1.display();

    // z2 = z;// copy constructors not invoked
    // z2.display();

    // Number z3 = z;// copy constructors invoked
    // z3.display();
    return 0;
}