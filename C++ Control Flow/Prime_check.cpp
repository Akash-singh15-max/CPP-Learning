// C++ program to check whether a number is prime or not
#include<iostream>
using namespace std;
bool isPrime(int n){
    // if the number is less than or equal to one then it is not prime
    if (n<=1)
    {
        return false;
    }
    // check for divisors from 2 to n-1
    for (int i = 2; i < n; i++)
    {
        // if n is divisible by any number in this range, it is not prime
        if (n%i == 0)
        {
            return false;
        }
        else{
            //if no divisor is found it is a prime
            return true;
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter the value of number: ";
    cin>>n;
    if (isPrime(n))
    {
        cout<<n<<" is a prime number.";
    }
    else{
        cout<<n<<" is not a prime number.";
    }
    return 0;
}