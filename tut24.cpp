// Static data members

#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    // A static function only have an access of any another static function or variables
    static void getCount(void){
        // cout<<id; //throw an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// count is the static data member of class employee
int employee ::count; // Default value is 0
int main()
{
    employee akash, vishal, lucky;

    // akash.id=1;
    // akash.count=1;  // can't do this as id and count is private
    akash.setData();
    akash.getData();
    employee::getCount();

    vishal.setData();
    vishal.getData();
    employee::getCount();

    lucky.setData();
    lucky.getData();
    employee::getCount();
    return 0;
}