// Program to print reverse of a string using recursion
#include<iostream>
using namespace std;
void reverse(char* str, int index, int n){
    if (index==n)   // return if we reached at last index or at the end of the string
    {
        return;
    }
    char temp = str[index]; // storing each character starting from index 0 in function call index
    reverse(str,index+1,n); // calling recursive function by increasing index everytime
    cout<<temp;             // printing each stored character while recursing back

}
int main(){
    char a[]="Akash is aku";
    int n = sizeof(a);
    cout<<n<<endl;
    reverse(a,0,n);


    return 0;
}