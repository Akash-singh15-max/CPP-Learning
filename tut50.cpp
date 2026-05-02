// Pointers: New and Delete keyword

#include<iostream>
using namespace std;

int main(){
    // Basic example
    int a=4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // New operator
    int *p = new int(40);
    float *q = new float(69.9);
    cout<<"The value at address p is "<<*(p)<<endl;
    cout<<"The value at address q is "<<*q<<endl;

    int *arr = new int[3];
    arr[0]=10;
    *(arr+1)=20;
    arr[2]=30;
    // delete[] arr; // delete operator
                  // used to delete dynamically allocated block of memory

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // Delete operator
    return 0;
}