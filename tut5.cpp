// Basic input and output
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"\nEnter the value of num1: "; // '<<' is called insertion operator
    cin>>num1; // '>>' is called Extraction operator
    cout<<"\nEnter the value of num2: "; 
    cin>>num2;
    cout<<"\nThe sum is "<<num1+num2;

    return 0;
}