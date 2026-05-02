#include<iostream>
int glo=6;
using namespace std;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=78;
    int a=4;
    int b=5;
    float pi = 3.14;
    char c= 'u';
    bool is_true=true;
    sum();
    cout<<glo<<is_true;
    cout<<"\nThe value of a is "<<a<<".\nThe value of b is "<<b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;
    return 0;
} 
