// C++ program to Multiply two floating-point numbers
#include<iostream>
using namespace std;

float multiply_floatnumbers(float a, float b){
    return a*b;
}
int main(){
    float a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    float product = multiply_floatnumbers(a,b);
    cout<<product;

    return 0;
}