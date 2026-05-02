// Structure, Unions and Enums
#include<iostream>
using namespace std;
// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };


// Using typedef  
typedef struct 
{
    int eId;
    char favChar;
    float salary;
}ep;


// Using union
    union money
    {
        int rice;
        char car;
        float pounds;
    };
int main(){
    // ep akash;
    // akash.eId = 1;
    // akash.favChar = 'c';
    // akash.salary = 600000000;
    // cout<<"The value is "<<akash.eId<<endl;
    // cout<<"The value is "<<akash.favChar<<endl;
    // cout<<"The value is "<<akash.salary<<endl;


    
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice;

    // Using enum
    enum Meal{breakfast,lunch,dinner};
    Meal m1 = breakfast;
    cout<<m1;

    return 0;
}