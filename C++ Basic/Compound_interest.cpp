// C++ program to find compound interest
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double principal = 10000, rate = 5, time = 2;
    double A = principal * ((pow((1+rate/100),time)));
    double CI = A - principal;
    cout<<"Compound Interest is "<<CI;


    return 0;
}