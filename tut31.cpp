// Constructors overloading
// Ek class ke andar bahut sare constructors ho skte hai
#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
        // default constructors
        complex(){
            a = 0;
            b = 0;
        }
        // parameterized constructors
        complex(int x, int y){
            a = x;
            b = y;
        }
        // parameterized constructors
        complex(int x){
            a = x;
            b = 0;
        }
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex c1(4,6);
    c1.printNumber();
    complex c2(5);
    c2.printNumber();
    complex c3;
    c3.printNumber();
    return 0;
}