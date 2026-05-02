// Recursion ---->
#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
/*
    Step by step calculation of factorial(4)---
    factorial(4) = 4 * factorial(3);
    factorial(4) = 4 * 3 * factorial(2);
    factorial(4) = 4 * 3 * 2 factorial(1);
    factorial(4) = 4 * 3 * 2 *1;
    factorial(4) = 24;
*/

int main(){
    // Factorial of a number:
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}

// // Get Fibonacci sequence through recursion (Avoid it!!!)
// #include<iostream>
// using namespace std;
// int fib(int n){
//     if (n<2)
//     {
//         return 1;
//     }
//     return fib(n-2) + fib(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the  number: ";
//     cin>>n;

//     cout<<"The term in Fibonacci sequence at position "<<n<<" is "<<fib(n)<<endl;

//     return 0;
// }