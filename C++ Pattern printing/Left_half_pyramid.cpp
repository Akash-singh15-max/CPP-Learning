// // C++ program to print left half pyramid pattern
// #include<iostream>
// using namespace std;

// int main(){
//     int row;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     // first for loop is used to identify number of rows
//     for (int i = row; i > 0; i--)
//     {
//         // second for loop is used to identify number of columns and here 
//         // the values will be changed according to the first for loop
//         for (int j = 0; j <= row; j++)
//         {
//             if (j>=i)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }








#include<iostream>
using namespace std;

int main(){
    int i = 0, j = 0, sp = 0;
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    while (i<rows)
    {
        while (sp<(rows - i - 1))
        {
            cout<<" ";
            sp++;
        }
        sp=0;
        while (j<= i)
        {
            cout<<"*";
            j++;
        }
        j = 0;
        i++;
        cout<<endl;
    }
    
    return 0;
}