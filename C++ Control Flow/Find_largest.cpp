// C++ program to find the greatest of three numbers using In-built max()
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a, b, c;
    a = 40, b = 69, c = 2;
    int ans;
    ans = max({a,b,c});
    cout<<ans<<" is the largest among the three.";

    return 0;
}









// // C++ program to find the largest number using if else statement
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//     cout<<"Enter the three numbers a, b and c"<<endl;
//     cin>>a>>b>>c;
//     if (a>=b)
//     {
//         if (a>=c)
//         {
//             cout<<"The largest among three numbers is: "<<a<<endl;
//         }
//         else{
//             cout<<"The largest among three number is: "<<c<<endl;
//         }
//     }
//     else{
//         if (b>=c)
//         {
//             cout<<"The largest among three numbers is: "<<b<<endl;
//         }
//         else{
//             cout<<"The largest among three number is: "<<c<<endl;
//         }
//     }

//     return 0;
// }




// // C++ program to find largest among three numbers using temporary variable
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 44, b = 69, c = 3;
//     int max = a;
//     if (max<b)
//     {
//         max = b;
//     }
//     if (max<c)
//     {
//         max = c;
//     }
//     printf("%d is the maximum out of %d, %d and %d",max, a, b, c);

//     return 0;
// }