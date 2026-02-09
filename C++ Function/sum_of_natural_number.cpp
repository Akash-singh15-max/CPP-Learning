// Program for sum of natural numbers using recursion
#include<iostream>
using namespace std;
int recSum(int n){
    if (n<=1)
    {
        return n;
    }
    else{
        return n+recSum(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the last natural number from which you want the sum from 1: ";
    cin>>n;
    cout<<recSum(n);

    return 0;
}