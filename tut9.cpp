#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your name: ";
    cin>>age;
    if (age<18)
    {
        cout<<"You can not come to my party..."<<endl;
    }
    else if (age==18)
    {
        cout<<"You are a kid. You can have kid pass"<<endl;
    }
    else
    {
        cout<<"You can come to my party";
    }
    return 0;
}