// Program to find factorial of a large number using recursion
#include<iostream>
using namespace std;
int findFactorial(int n){
    if (n<=1)
    {
        return 1;
    }
    else{
        return n*findFactorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the number for factorial: ";
    cin>>n;
    cout<<findFactorial(n);

    return 0;
}