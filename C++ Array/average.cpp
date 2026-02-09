// Program for average of an array 
#include<iostream>
using namespace std;
double average(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return (double)sum/n;
}
int main(){
    int arr[]={1,2,5,3,6,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<average(arr,n)<<endl;

    return 0;
}


