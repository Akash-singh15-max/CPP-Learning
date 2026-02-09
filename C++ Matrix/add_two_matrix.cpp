// Program to add two matrix
#include<iostream>
using namespace std;
#define n 4
void add(int A[][n], int B[][n], int C[][n]){
    int i,j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
        
    }
    
}
int main(){
    int A[n][n]={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };
    int B[n][n]={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };
    // To store the result
    int C[n][n];
    int i,j;
    add(A,B,C);
    cout<<"Result matrix is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}