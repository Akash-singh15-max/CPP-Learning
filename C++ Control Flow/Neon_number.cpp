// C++ program to check and print Neon number in a given range
#include<iostream>
using namespace std;
int checkNeon(int n){
    int sq = n * n;
    int sum = 0;
    while (sq!=0)
    {
        sum = sum+sq%10;
        sq = sq/10;
    }
    return (sum == n);
}
int main(){
    // printing neon number upto 10000
    for (int i = 1; i <= 10000; i++)
    {
        if (checkNeon(i))
        {
            cout<<i<<" ";
        }
        
    }
    

    return 0;
}