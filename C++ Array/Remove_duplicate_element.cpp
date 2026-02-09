// Program to remove duplicates from sorted array
#include<iostream>
using namespace std;

// Function to remove duplicates elements. this function returns new size of modified array
int removeDuplicates(int arr[], int n){
    if (n==0 || n==1)
    {
        return n;
    }
    int temp[n];
    // To store index of next unique element
    int j =0;
    // if current element is not equal to next element then store that current element
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]!=arr[i+1])
        {
            temp[j++] = arr[i];
        }
        
    }
    // store the last element as whether it is unique or repeated. It hasn't stored previously
    temp[j++]=arr[n-1];
    // Modify original array
    for (int i = 0; i < j; i++)
    {
        arr[i]=temp[i];
    }
    return j;
}
int main(){
    int arr[]={1,2,3,2,4,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // remove Duplicates() returns new size of array
    n = removeDuplicates(arr,n);
    
    // print updated array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}