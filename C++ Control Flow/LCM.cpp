// // C++ program to find LCM of two numbers using simple method
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 15, b = 20, max, flag = 1;
//     // get largest number
//     max = (a>b)?a:b;
//     while (flag)
//     {
//         // if statement checks max is completely divisible by n1 and n2
//         if (max%a==0 && max%b == 0)
//         {
//             cout<<"LCM of "<<a<<" and "<<b<<" is: "<<max;
//             break;
//         }
//         // update by 1 on each iteration
//         ++max;
//     }
    

//     return 0;
// }




// C++ program to find LCM of two numbers 
#include<iostream>
using namespace std;
// recursive function to return gcd of a and b
long long gcd(long long int a, long long int b){
    if (b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
// function to return LCM of two numbers 
long long lcm(int a, int b){
    return (a/gcd(a,b))*b;
}
int main(){
    int a = 15, b = 20;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a,b);

    return 0;
}