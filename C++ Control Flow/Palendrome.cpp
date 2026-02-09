#include<iostream>
using namespace std;
bool isPalendrome(int n){
    int rev=0;
    int originalNumber = n;
    while (n>0)
    {
        rev=rev*10+n%10;
        n = n/10;
    }
    if (rev==originalNumber)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if (isPalendrome(n))
    {
        cout<<n<<" is palendrome.";
    }
    else{
        cout<<n<<" is not a palendrome.";
    }

    return 0;
}