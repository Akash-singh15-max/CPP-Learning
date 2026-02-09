// Check whether number is even or odd
#include<iostream>
using namespace std;
bool isEven(int n){
    return (n%2 == 0);
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if (isEven(n))
    {
        cout<<"The number is even.";
    }
    else
    {
        cout<<"The number is odd.";
    }

    return 0;
}