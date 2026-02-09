// C++ program to find Prime numbers between given interval
#include<iostream>
using namespace std;

int main(){
    int a, b, flag, i,j;
    cout<<"Enter the lower bound: ";
    cin>>a;
    cout<<"Enter the upper bound: ";
    cin>>b;
    cout<<"Prime numbers betwen "<<a<<" and "<<b<<" are: ";
    for (int i = a; i <= b; i++)
    {
        if (i==1||i==0)
        {
            continue;
        }
        flag = 1;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j == 0)
            {
                flag = 0;
                break;
            }
            
        }
        if (flag==1)
        {
            cout<<i<<" ";

        }
        
    }
    
    return 0;
}