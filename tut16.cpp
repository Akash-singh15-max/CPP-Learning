// Call by value and Call by reference
#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

// // This will not swap a and b because x and y is a copy of a and b, it will not affect a and b
// void swap(int x, int y){     //temp   x    y
//     int temp = x;            // 4     4    5
//     x = y;                   // 4     5    5
//     y = temp;                // 4     5    4
// }

// This will swap a and b as it deal with the address of the value
// Call by reference using pointers
// void swapPointer(int* x, int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// Call by reference using reference variable
void swapReferenceVar(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 4, b = 5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swap(a,b); //This will not swap a and b
    // swapPointer(&a, &b);// This will swap a and b using pointer reference 
    swapReferenceVar(a,b);// This will swap a and b using reference variables
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}