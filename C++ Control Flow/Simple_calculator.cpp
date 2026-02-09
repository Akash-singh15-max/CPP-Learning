// C++ program to make a simple calculator
#include<iostream>
using namespace std;

int main(){
    char op;
    float num1, num2;
    // it allows user to enter operator i.e. +,-,*,/;
    cout<<"Enter the operator: ";
    cin>>op;
    // it allow user to enter the operands
    cout<<"Enter the operands: ";
    cin>>num1>>num2;
    switch (op)
    {
    case '+':
        cout<<num1+num2;
        break;
    
    case '-':
        cout<<num1-num2;
        break;
    
    case '*':
        cout<<num1*num2;
        break;
    
    case '/':
        cout<<num1/num2;
        break;
    
    default:
        cout<<"Error! Operator isn't correct.";
        break;
    }

    return 0;
}