// C++ program to print number pattern

// Pattern 1:

/*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/

// Using for loop and while loop
#include<iostream>
using namespace std;

int main(){
    int row, col, number = 1, n = 5;
    // first for loop is used to identify number of rows
    for (int row = 0; row <=n; row++)
    {
        // second for loop is used to identify number of columns and here 
        // the values will be changed according to the first for loop
        for (int col = 0; col < row; col++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    

    // using while loop
    int rows = 1, columns = 0, num = 5;
    int Number = 1;
    while (rows<=n)
    {
        while (columns<=rows-1)
        {
            cout<<Number<<" ";
            columns++;
            Number++;
        }
        columns = 0;
        rows++;
        cout<<endl;
    }
    
    return 0;
}








// // Pattern 2:
// /*
//     1
//     2 2
//     3 3 3
//     4 4 4 4 
//     5 5 5 5 5
// */
// #include<iostream>
// using namespace std;

// int main(){
//     int row, col, n = 5;
//     for (int row = 0; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
    
//     // Using while loop
//     int rows = 1, columns = 0, N = 5;
//     while (rows<=N)
//     {
//         while (columns<=rows-1)
//         {
            
//         cout<<rows<<" ";
//         columns++;
//         }
//     columns = 0;
//     rows++;
//     cout<<endl;
//     }

//     return 0;
// }






// // Pattern 3:
// /*
//     1
//     12
//     123
//     1234
//     12345
// */
// #include<iostream>
// using namespace std;

// int main(){
//     int row, col, n = 5;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
    
//     // Using while loop
//     int rows = 1, columns = 1, N = 6;
//     int Number = 1;
//     while (rows<=N)
//     {
//         while (columns<=rows-1)
//         {
//             cout<<columns<<" ";
//             columns++;
//         }
//         columns=1;
//         rows++;
//         cout<<endl;
//     }
    

//     return 0;
// }