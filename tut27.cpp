// Ek class ke function ko dusre class ke fuction ka friend kaise bnay
#include <iostream>
using namespace std;
// Forward declaration
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};
class complex
{
    int a, b;
    // Individually declaring functions as friend
    friend int calculator ::sumRealComplex(complex, complex);
    friend int calculator ::sumCompComplex(complex, complex);

    // // Alter: Declaring the entire calculator class as a friend
    // friend class calculator;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getNumber(complex o1, complex o2){
        a = o1.a+o2.a;
        b = o1.b+o2.b;
    }
    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2, sum;
    o1.setNumber(1, 4);
    o1.printNumber();
    o2.setNumber(3, 5);
    o2.printNumber();
    calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    int result_c = calc.sumCompComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    cout << "The sum of complex part of o1 and o2 is " << result_c << endl;
    sum.getNumber(o1,o2);
    sum.printNumber();
    return 0;
}