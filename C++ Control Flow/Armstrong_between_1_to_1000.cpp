// C++ program to print Armstrong numbers between 1 to 1000
/*
    A number "N" is an Armstrong number if "N" is equal to the sum of all N's digits
    raised to the power of the number of digits in N.
*/
#include<iostream>
#include<cmath>
using namespace std;
// function to return the order of a number
int order(int num){
    int count = 0;
    while (num>0)
    {
        num= num/10;
        count++;
    }
    return count;
}

// function to check whether the given number is Armstrong or not
bool isArmstrong(int num){
    int order_n = order(num);
    int num_temp = num, sum = 0;
    while (num_temp>0)
    {
        int curr = num_temp%10;
        sum+=pow(curr,order_n);
        num_temp/=10;
    }
    if (sum==num)
    {
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<"Armstrong numbers between 1 to 1000: ";
    for (int num = 1; num <= 1000; num++)
    {
        if (isArmstrong(num))
        {
            cout<<num<<" ";
        }
        
    }
    

    return 0;
}