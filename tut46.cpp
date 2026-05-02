/*
    Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utality function and perform
                          +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utality function and perform
                              any four scientific operations of your choice
                              and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What types of Inheritance are you using? --> Multiple Inheritance
    Q2. Which mode of Inheritance are you using? --> public simpleCalculator, public scientificCalculator
    Q3. Create an object of HybridCalculator and display results of simple and scientific calcultor.
    Q4. How is code reusability implemented?
*/

#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator{
    int a;
    int b;
    public:
        void get_data_simple(){
            cout<<"Enter the value of a "<<endl;
            cin>>a;
            cout<<"Enter the value of b "<<endl;
            cin>>b;
        }
        void perform_operations_simple(){
            cout<<"The value of a + b is : "<<a + b<<endl;
            cout<<"The value of a - b is : "<<a - b<<endl;
            cout<<"The value of a * b is : "<<a * b<<endl;
            cout<<"The value of a / b is : "<<a / b<<endl;
            
        }
};
class ScientificCalculator{
    int a,b;
    public:
        void get_data_sicentific(){
            cout<<"Enter the value of a "<<endl;
            cin>>a;
            cout<<"Enter the value of b "<<endl;
            cin>>b;
        }
        void perform_operations_scientific(){
            cout<<"The vale of cos(a) is: "<<cos(a)<<endl;
            cout<<"The vale of sin(a) is: "<<cos(a)<<endl;
            cout<<"The vale of exp(a) is: "<<exp(a)<<endl;
            cout<<"The vale of tan(a) is: "<<tan(a)<<endl;
        }
};
class HybridCalculator: public SimpleCalculator, public ScientificCalculator{
    
};
int main(){
    // SimpleCalculator calc;
    // calc.get_data_simple()  ;
    // calc.perform_operations_simple();

    // ScientificCalculator calc2;
    // calc2.get_data_scientific();
    // calc2.perform_operations_scientific();

    HybridCalculator calc_h;
    calc_h.get_data_sicentific();
    calc_h.perform_operations_scientific(); 
    calc_h.get_data_simple();
    calc_h.perform_operations_simple();
    return 0;
}