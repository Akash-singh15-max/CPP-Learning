// C++ program to find all factors of a natural number
#include<iostream>
using namespace std;
void printDivisors(int n){
    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            cout<<" "<<i;
        }
        
    }
    
}
int main(){
    cout<<"The divisors of 100 are: ";
    printDivisors(100);

    return 0;
}