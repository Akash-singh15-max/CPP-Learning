// Inheritance syntax and visiblity mode

#include<iostream>
using namespace std;
// Base class
class employee{
    public: 
        int id;
        float salary;   
        employee(int inpId){
            id = inpId;
            salary = 34.0;
        }
    employee(){}
};
// Derived class
/*
    class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
    {   
        class members/methods/etc...
    }
    Note:
    1. Defalut visibilty mode is private
    2. public visiblity mode: public member of the base class becomes public members 
       of the base class.
    3. private visiblity more: public member of the base class become privare memebers
       of the bast class.
    4. private members are never inherited  
*/
// Creating a programer class derived from employee base class
class programmer: public employee{
    public:
        int languageCode;
        programmer(int inpId){
            id = inpId;
            languageCode = 9;
        }
        void getData(){
            cout<<id<<endl;
        }
};
int main(){
    employee akash(1),harry(2);
    cout<<akash.salary<<endl;
    cout<<harry.salary<<endl;
    programmer skillF(21);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    cout<<skillF.id<<endl;
    return 0;
}