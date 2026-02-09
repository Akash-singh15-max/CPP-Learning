#include<iostream>
using namespace std;
int addTwoNumber(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"Sum = "<<addTwoNumber(a,b);

    return 0;
}