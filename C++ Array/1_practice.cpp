#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int original_arr[]={1,2,3,4,5};
    int n = sizeof(original_arr)/sizeof(original_arr[0]);
    int copied_arr[n], i, j;
    for (int i = 0; i < n; i++)
    {
        copied_arr[i]=original_arr[n-i-1];
    }
    cout<<"Original array:";
    printArray(original_arr,n);
    cout<<endl;
    cout<<"New Array:";
    printArray(copied_arr,n);

    return 0;
}