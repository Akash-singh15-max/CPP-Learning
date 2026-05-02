// Constructors ----->

/*
    Characteristics of Constructors
    1. It should be declared in the public section of the class
    2. They are automatically invoked whenever the object is created
    3. They can't return values and do not have return types
    4. It can have default arguments
    5. We can't reffer to their address

*/

// Default constructors
#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
        /*
            --> Creating a Constructor
            --> Constructor is a special member function with the same 
                name as of the class. 
            --> It is initializ the objects of its class.
            --> It is automatically invoked whenever and object is created.            
        */
        complex(void); // Constructor declaration
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex :: complex(void){ // This is a default constructors as it accepts no parameters.
    a = 0;
    b = 0;
}
int main(){
    
    complex c;
    c.printNumber();
    return 0;
}