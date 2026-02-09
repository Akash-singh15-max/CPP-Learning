// Program to check if two matrices are identical
#include<iostream>
using namespace std;
#define N 4
int areSame(int A[][N], int B[][N]){
    int i,j;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i][j]!=B[i][j])
            {
                return 0;
            }
            
        }
        
    }
    return 1;
}
int main(){
    int A[][N]={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };
    int B[N][N]={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };
    if (areSame(A,B))
    {
        cout<<"Matrices are identical"<<endl;
    }
    else{
        cout<<"Matrices aren't identical"<<endl;
    }

    return 0;
}