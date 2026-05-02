// Array of objects
#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setData(void){
            salary = 122;
            cout<<"Enter the id of the employee "<<endl;
            cin>>id;
        }
        void getData(void){
            cout<<"Salary is "<<salary<<endl;
            cout<<"Thi id of this employee is "<<id<<endl;
        }
};
int main(){
    // Employee akash, vishal, lucky;
    // akash.setData();
    // akash.getData();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setData();
        fb[i].getData();
    }
    
    return 0;
}