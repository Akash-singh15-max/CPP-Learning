// Program to check if a Prime number can be expressed as sum of two prime numbers
#include<iostream>
using namespace std;
bool isPrime(int n){
    if (n<=1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}
bool isPossible(int n){
    if (isPrime(n) && isPrime(n-2))
    {
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter any prime number: ";
    cin>>n;
    if (isPossible(n))
    {
        cout<<"yes. "<<endl;
    }
    else{
        cout<<"No."<<endl;
    }

    return 0;
}