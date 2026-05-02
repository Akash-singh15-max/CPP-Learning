// Arrays ----
#include<iostream>
using namespace std;

int main(){
    int marks[]={44,55,78,94};
    cout<<"The marks at 0th place is "<<marks[0]<<endl;
    cout<<"The marks at 1th place is "<<marks[1]<<endl;
    cout<<"The marks at 2th place is "<<marks[2]<<endl;
    cout<<"The marks at 3th place is "<<marks[3]<<endl;

    // printing array using for loops
    cout<<"\nPrinting array using for loops"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // printing array using while loops
    cout<<"\nPrinting array using while loops"<<endl;
    int i=0;
    while (i<4)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    };
    
    // printing array using do - while loops
    cout<<"\nPrinting array using do - while loops"<<endl;
    
    do
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    } while (i<4);
    

    // Pointers and Arrays
    int* p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    return 0;
}