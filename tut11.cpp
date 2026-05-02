// Break and Continue statements
#include<iostream>
using namespace std;

int main(){
    // // using break statement
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<i<<endl;
    //     if (i==2)
    //     {
    //         break; 
    //     }
        
    // }
    
    // using continue statement
    for (int i = 0; i < 10; i++)
    {
        
        if (i==2)
        {
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}