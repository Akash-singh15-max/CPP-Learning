// Program to copy the contents of one array into another in the reverse order
#include<iostream>
using namespace std;
void printArray(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int original_arr[]={1,2,3,4,5};
    int len = sizeof(original_arr)/sizeof(original_arr[0]);
    int copied_arr[len], i, j;
    for (int i = 0; i < len; i++)
    {
        // copy the element of the array in the copied_arr in the reverse order
        copied_arr[i]=original_arr[len-i-1];
    }
    // print original array
    cout<<"Original Array: "<<endl;
    printArray(original_arr,len);

    // print copied array
    cout<<"\nNew Array: "<<endl;
    printArray(copied_arr,len);
    return 0;
}