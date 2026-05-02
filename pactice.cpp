// Call by value and call by reference
#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int a = 5, b = 10;
    cout<<"Initial value of a and b is : "<<a<<" and "<<b<<endl;
   
    swapReference(a,b);
    cout<<"\nFinal value of a and b is : "<<a<<" and "<<b<<endl;

    return 0;
}