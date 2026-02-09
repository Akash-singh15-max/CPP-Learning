// C++ program to find sum of first n natural number
#include<iostream>
using namespace std;

int main(){
    int start, end;
    int sum=0;
    cout<<"Enter the lower bound: ";
    cin>>start;
    cout<<"Enter the upper bound: ";
    cin>>end;
    for (int i = start; i <= end; i++)
    {
        sum = sum + i;
    }
    cout<<"Sum of first n natural number is: "<<sum<<endl;
    return 0;
}