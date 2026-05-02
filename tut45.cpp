// Virtual Base class
/*
            --------------Student---------------
            |                                  |
            |                                  |
            Test                              Sport
            |                                  |
            |                                  |
            --------------Result---------------- 
*/

#include<iostream>
using namespace std;
class Student{
    protected:
        int roll_number;
    public:
        void set_number(int a){
            roll_number = a;
        }
        void print_number(){
            cout<<"Your roll number is "<<roll_number<<endl;
        }
};

class Test: virtual public Student{
    protected:
        float maths,physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<"Your result is here: "<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }
};

class Sport: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result: public Test, public Sport{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};
int main(){
    Result akash;
    akash.set_number(10);
    akash.set_marks(90.0,78.5);
    akash.set_score(9);
    akash.display();

    return 0;
}