// Reversing a sentence using recursive function
#include<iostream>
using namespace std;
void reverse(char* str, int index, int n){
    if (index==n)
    {
        return;
    }
    char temp=str[index];
    reverse(str,index+1,n);
    cout<<temp;
}
int main(){
    char a[]="Akash is aku";
    int n = sizeof(a);
    reverse(a,0,n);

    return 0;
}