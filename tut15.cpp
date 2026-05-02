#include<iostream>
using namespace std;
int sum(int a, int b);
int main(){
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    // num1 and num2 are actual parameter
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
}
// a and b are actual parameter
int sum(int a, int b){
    int c = a+b;
    return c;
}