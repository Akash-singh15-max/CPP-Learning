// Program to find transpose of rectangle matrix
#include<iostream>
using namespace std;
#define M 3
#define N 4
void transpose(int A[M][N], int B[N][M]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            B[i][j]=A[j][i];
        }
        
    }
    
}
int main(){
    int A[M][N]={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3}
    };
    int B[N][M], i, j;
    transpose(A,B);
    cout<<"Result Matrix is: "<<endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}