// Destructors ---->

//Destructors is called when compiler know that from now there is no use of that object
#include<iostream>
using namespace std;
// Destructors never takes an argument nor does it return any value
int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructors is called for object number "<<count<<endl; 
        }
        ~num(){
            cout<<"This is the time when destructors is called for object number "<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}