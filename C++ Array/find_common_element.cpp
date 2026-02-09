// Program to find common element from 2 arrays
#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={11,22,3,4,45,55};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];
    int flag, i, j, k = 0, x;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                flag = 0;
            }
            for (int x = 0; x < k; x++)
            {
                if (arr3[x]==arr1[i])
                {
                    flag++;
                }
                
            }
            if (flag==0)
            {
                arr3[k]=arr1[i];
                cout<<arr3[k]<<" ";
                k++;
            }
            
        }
        
    }
    
    
    
    

    return 0;
}