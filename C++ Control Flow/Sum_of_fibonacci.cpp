// C++ program to find sum of fibonacci numbers at even indexes upto N terms
#include<iostream>
using namespace std;
// compute value of first fibonacci numbers and stores the even indexed sum
int calculateEvenSum(int n){
    if (n<=0)
    {
        return 0;
    }
    int fibo[2*n-1];
    fibo[0] = 0;
    fibo[1]= 1;
    // initialize result
    int sum = 0;
    // add remaning terms 
    for (int i = 2; i <= 2*n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
        // for even indices
        if (i%2==0)
        {
            sum += fibo[i];
        }
    }
    // returns the alternating sum
    return sum;
}
int main(){
    int n = 8;
    // find the even indiced sum
    cout<<"Even indexed Fibonacci Sum upto "<<n<<" terms: "<<calculateEvenSum(n)<<endl;


    return 0;
}