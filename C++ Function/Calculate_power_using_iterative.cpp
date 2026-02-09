// Program to calculate power of a number using iterative approach
#include<iostream>
using namespace std;
long power(int x, unsigned n){
    long long pow = 1;  // initialize result to 1
    
    // multiply x for n times
    for (int i = 0; i < n; i++)
    {
        pow=pow*x;

    }
    return pow;
}
int main(){
    int a,b;
    cout<<"Enter the base number: ";
    cin>>a;
    cout<<"Enter the power number: ";
    cin>>b;
    // function call 
    int result = power(a,b);
    cout<<result<<endl;

    return 0;
}