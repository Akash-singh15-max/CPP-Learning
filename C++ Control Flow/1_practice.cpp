// Even or Odd
#include<iostream>
using namespace std;

bool isEven(int n){
    if (n%2==0)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    int n;
    cout<<"\nEnter any number : ";
    cin>>n;
    if (isEven(n))
    {
        cout<<n<<" is an Even number...."<<endl;
    }
    else{
        cout<<n<<" is an Odd number...."<<endl;
    }
    

    return 0;
}