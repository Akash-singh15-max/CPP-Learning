// // C++ program to print right half pyramid pattern
// // using for loop
// #include<iostream>
// using namespace std;

// int main(){
//     int row;
//     cout<<"Enter the number of row: ";
//     cin>>row;
//     // first for loop is used to identify numbers of rows
//     for (int i = 1; i <= row; i++)
//     {
//         // second for loop is used to identify number of column and here the 
//         // values will be changed according to the first for loop
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }






// Using while loop
#include<iostream>
using namespace std;

int main(){
    int i = 0, j = 0;
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    // while loop check the condition until the given condition is 
    // false if it is true then entered into the loop
    while (i<row)
    {
        // this loop will print the pattern]
        while (j<=i)
        {
            cout<<"* ";
            j++;
        }
        j = 0;
        i++;
        cout<<endl;
    }
    

    return 0;
}