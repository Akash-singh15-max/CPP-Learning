#include<iostream>
using namespace std;

void swaping(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"The value of a and b before swaping is: "<<a<<" "<<b<<endl;;
    swaping(a,b);
    cout<<"The value of a and b after swaping is: "<<a<<" "<<b;

    return 0;
}