// Program to multiply two matrices
#include<iostream>
using namespace std;
#define R1 2 // Number of rows in mat1
#define C1 2
#define R2 2
#define C2 3
void multMat(int mat1[][C1], int mat2[][C2]){
    int result[R1][C2];
    cout<<"Multiplication of given two matrices is: "<<endl;
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            result[i][j]=0;
            for (int k = 0; k < R2; k++)
            {
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
            cout<<result[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}
int main(){
    int mat1[R1][C1]={
        {1,1},
        {2,2}
    };
    int mat2[R2][C2]={
        {1,1,1},
        {2,2,2}
    };
    if (C1!=R2)
    {
        cout<<"The number of columns in mat1 must be equal to the number of rows in mat2"<<endl;
    }
    multMat(mat1,mat2);

    return 0;
}