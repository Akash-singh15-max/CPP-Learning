// Multiplication of two matrix
#include<iostream>
using namespace std;

int main(){
    int A[10][10], B[10][10], C[10][10];
    int m,n,p,q,i,j,k;
    cout<<"Enter the number of row and col of matrix A: ";
    cin>>m>>n;
    cout<<"Enter the number of row and col of matrix B: ";
    cin>>p>>q;
    if ((n==p)&&(m<10)&&(n<10)&&(p<10)&&(q<10))
    {
        cout<<"\nEnter the elements of matrix A"<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>A[i][j];
            }
            
        }
        cout<<"\nDisplaying the element of matrix A"<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<A[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\nEnter the element of matrix B"<<endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin>>B[i][j];
            }
            
        }
        cout<<"\nDisplaying the element of matrix B"<<endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout<<B[i][j]<<"\t";
            }
            cout<<endl;
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                C[i][j]=0;
                for (int k = 0; k < n; k++)
                {
                    C[i][j]+=A[i][k]*B[k][j];
                }
                
            }
            
        }
        cout<<"\nDisplaying the element of matrix C"<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout<<C[i][j]<<"\t";
            }
            cout<<endl;
        }
        
    }
    

    return 0;
}