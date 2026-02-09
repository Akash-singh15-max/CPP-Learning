// C++ program to find GCD of two numbers using simple method
#include<iostream>
using namespace std;
int gcd(int a, int b){
    // find minimum of a and b
    int result = min(a,b);
    while (result>0)
    {
        if (a%result==0 && b%result == 0)
        {
            break;
        }
        result--;
    }
    return result;
}
int main(){
    int a = 98, b = 98;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b);

    return 0;
}




