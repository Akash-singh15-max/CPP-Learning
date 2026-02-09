// Program to efficiently compute sums of diagonals of a matrix
#include<iostream>
using namespace std;
#define MAX 100
void printDiagonalSums(int A[][MAX], int n){
    int principal = 0, secondary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                principal+=A[i][j];
            }
            if ((i+j)==(n-1))
            {
                secondary+=A[i][j];
            }
            
        }
        
    }
    cout<<"Principle Diagonal: "<<principal<<endl;
    cout<<"Secondary Diagonal: "<<secondary<<endl;
}
int main(){
    int A[][MAX]={
        {1,2,3,4},
        {5,6,7,8},
        {1,2,3,4},
        {5,6,7,8}
    };
    printDiagonalSums(A,4);

    return 0;
}