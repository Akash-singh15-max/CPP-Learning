// Program to find the minimum and maximum element of an array
#include<iostream>
using namespace std;
int getMin(int arr[], int n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    return max;
}
int getMax(int arr[], int n){
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    return min;
}
int main(){
    int arr[]={2,343,232,55,69};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum element of array: "<<getMin(arr,n)<<endl;
    cout<<"Maximum element of array: "<<getMax(arr,n)<<endl;

    return 0;
}