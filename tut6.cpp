// Operators in C++
#include<iostream>
using namespace std;
int main(){
    int a = 5,b=3;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++:"<<endl;
    // Arthematic Operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;// first print a then increment it (5)
    cout<<"The value of a-- is "<<a--<<endl;// first print a then decrement it (6)
    cout<<"The value of ++a is "<<++a<<endl;// first increment a then print it (6)
    cout<<"The value of --a is "<<--a<<endl;// first decrement a then print it (5)
    cout<<endl;
    // Assignment Operators --> used to assign values to variables
    // int a = 3, b = 5;
    // char d = 'a';

    // Comparison Operator
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<endl;

    // Logical Operator
    cout<<"Following are the Logical operators in C++"<<endl;
    cout<<"The value of logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))
    <<endl;
    cout<<"The value of logical or operator ((a==b) || (a>b)) is: "<<((a==b) || (a>b))
    <<endl;
    cout<<"The value of logical not operator (!(a==b)) is: "<<(!(a==b))
    <<endl;
    return 0;
}