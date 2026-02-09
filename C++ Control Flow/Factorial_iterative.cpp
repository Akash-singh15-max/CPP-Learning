// C++ program to find factorial of a number using iterative approach
// // Using for loop
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int f=1;
//     for (int i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     return f;
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;

//     return 0;
// }



// Using while loop
#include<iostream>
using namespace std;
int factorial(int n){
    if (n==0)
    {
        return 1;
    }
    int i = n, fact = 1;
    while (n/i != n)
    {
        fact = fact*i;
        i--;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the value of num: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;

    return 0;
}