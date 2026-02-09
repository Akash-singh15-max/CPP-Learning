// C++ program for fibonacci numbers using recursive approach
#include<iostream>
using namespace std;
int fibo(int n){
    if (n<=1)
    {
        return n;

    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n = 9;
    cout<<fibo(n);
    // getchar();

    return 0;
}