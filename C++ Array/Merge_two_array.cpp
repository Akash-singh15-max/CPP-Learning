// Program to merge two sorted array
#include<iostream>
using namespace std;
void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[]){
    int i = 0, j = 0, k = 0;
    while (i<n1)
    {
        arr3[k++]=arr1[i++];
    }
    while (j<n2)
    {
        arr3[k++]=arr2[j++];
    }
    
    // for sorting
    int n3=n1+n2;
    int temp = 0, a,b;
    for (int a = 0; a < n3; a++)
    {
        for (int b = a+1; b < n3; b++)
        {
            if (arr3[a]>arr3[b])
            {
                temp = arr3[a];
                arr3[a]=arr3[b];
                arr3[b]=temp;
            }
            
        }
        
    }
    
}
int main(){
    int arr1[]={1,2,4,8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={3,2,9};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];
    mergeArrays(arr1,arr2,n1,n2,arr3);
    cout<<"Array after merging: "<<endl;
    for (int i = 0; i < n1+n2; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}