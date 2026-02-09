// Program to find Prime numbers between given range
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
void findPrime(int n1, int n2)
{
    bool found = false;
    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
            found=true;
        }
        
    }
    if (!found)
    {
        cout<<"No prime number found between given range."<<endl;
    }
    
}
int main(){
    int n1=1,n2=20;
    findPrime(n1,n2);

    return 0;
}