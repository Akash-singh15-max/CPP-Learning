// C++ program to check if a given year is a leap year or not
#include<iostream>
using namespace std;
bool check_Year(int year){
    if (year%4==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    check_Year(year)?cout<<"Leap Year":cout<<"Not a Leap year"<<endl;

    return 0;
}