// Program to remove all occurrences of an element in an array
#include<iostream>
using namespace std;
void remove_all_occurrence(int arr[], int target, int n){
    int count = 0;
    // counting all occurrence of target element
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            count++;
        }
        
    }
    // creating new array of size = original size - no. of target element
    int new_arr[n-count];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=target)
        {
            new_arr[index] = arr[i];
            index++;
        }
        
    }
    // printing the new array
    int m = sizeof(new_arr)/sizeof(new_arr[0]);
    for (int i = 0; i < m; i++)
    {
        cout<<new_arr[i]<<" ";
    }
    
}
int main(){
    int arr[]={1,4,3,6,8,3,9,10,3,3,7};
    int target = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    remove_all_occurrence(arr,target,n);

    return 0;
}