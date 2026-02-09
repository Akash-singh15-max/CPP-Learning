// Program to find Normal and Trace of a Matrix
#include<iostream>
#include<cmath>
using namespace std;
const int MAX = 100;
int findNormal(int mat[][MAX], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum+=mat[i][j]*mat[i][j];
        }
        
    }
    return sqrt(sum);
}
int findTrace(int mat[][MAX], int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=mat[i][i];
    }
    return sum;
}
int main(){
    int mat[][MAX]    ={
        {1,1,1,1,1},
        {2,2,2,2,2},
        {3,3,3,3,3},
        {4,4,4,4,4},
        {5,5,5,5,5}
    };
    cout<<"Trace of Matrix: "<<findTrace(mat,5)<<endl;
    cout<<"Normal of Matrix: "<<findNormal(mat,5)<<endl;

    return 0;
}