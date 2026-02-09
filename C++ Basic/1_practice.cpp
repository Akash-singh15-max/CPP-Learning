// Program to check armstrong number
#include<iostream>
using namespace std;

// Function to calculate x raised to the power y
int power(int x, int y){
    if (y==0)
    {
        return 1;
    }
    if (y%2==0)
    {
        return(power(x,y/2)*power(x,y/2));
    }
    else{
        return(x*power(x,y/2)*power(x,y/2));
    }
}

// Function to calculate order of the number
int order(int x){
    int n=0;
    while (x)
    {
        n++;
        x=x/10;
    }
    return n;
}

// Function to check the armstrong number
bool isArmstrong(int x){
    int n = order(x);
    int temp = x, sum = 0;
    while (temp)
    {
        int r = temp%10;
        sum+=power(r,n);
        temp/=10;
    }
    return (sum==x);
}
int main(){
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    if (isArmstrong(x))
    {
        cout<<x<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<x<<" isn't an Armstrong number."<<endl;
    }

    return 0;
}