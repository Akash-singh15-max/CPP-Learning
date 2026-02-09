// C++ program to find factorial of a number using recursive approach
#include<iostream>
using namespace std;
int factorial(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
    
}
int main(){
    int n;
    cout<<"Enter the number whose factorial is required: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;

    return 0;
}