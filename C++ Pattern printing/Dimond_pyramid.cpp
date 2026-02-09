/*
    Dimond Pyramid
    
       *
      ***
     *****
      ***
       * 
*/ 
#include<iostream>
using namespace std;

int main(){
    int rows = 5;
    // print the top pyramid
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows -i ; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= 2*i-1 ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    // print inverted pyramid
    for (int i = rows-1; i >= 1 ; i--)
    {
        for (int j = 1; j <= rows-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}