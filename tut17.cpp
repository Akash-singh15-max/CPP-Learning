#include<iostream>
using namespace std;
// // It is recomended to not use the inline function if their is recursion...
inline int product(int a, int b){
    return a*b;
}
/*  Not recomended to use below line with inline function...
    // Using static variable
    int product(int a, int b){
        static int c = 0;// This execute only once
        c = c+1;// Next time this function is run, the value of c will be retained
        return a*b+c;
    }
*/


float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}
int main(){
    // int a,b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    

    // About default argument
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank accout, you will receive "
    <<moneyReceived(money)<<"Rs after 1 year."<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank accout, you will receive "
    <<moneyReceived(money,1.1)<<"Rs after 1 year."<<endl;
    return 0;
}