// Reference variable and typecasting

#include<iostream>
int c = 44;
using namespace std;
int main(){

    //**************Bulit in Data types****************
    // int a,b,c;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // c=a+b;
    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The global c is "<<::c;

    //*************Float, double, long double Literals******************
    // float d=3.14f;
    // long double e = 3.14l;
    // cout<<"The size of 3.14 is "<<sizeof(3.14)<<endl;
    // cout<<"The size of 3.14f is "<<sizeof(3.14f)<<endl;
    // cout<<"The size of 3.14F is "<<sizeof(3.14F)<<endl;
    // cout<<"The size of 3.14l is "<<sizeof(3.14l)<<endl;
    // cout<<"The size of 3.14L is "<<sizeof(3.14L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

    //*************Reference Variables**************** 
    // Rohan Das----> Monty----> Rohu----> Dangerous Coder
    // float x = 455;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //*************Typecasting************* 
    int a = 45;
    float b = 45.55;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    int c = int(b);
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;   
    cout<<"The expression is "<<a+(int)b<<endl;
    return 0;
}