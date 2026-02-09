// Program for Boundary Elements of a Matrix
#include<iostream>
using namespace std;
#define MAX 100
void printBoundary(int arr[][MAX], int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0 || j==0 || i==n-1 ||j==n-1)
            {
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" "
                    <<" ";
            }
        }
        cout<<endl;
    }
    
}
int main(){
    int arr[][MAX]={
        {1,2,3,4},
        {5,6,7,8},
        {1,2,3,4},
        {5,6,7,8}
    };
    printBoundary(arr,4,4);

    return 0;
}