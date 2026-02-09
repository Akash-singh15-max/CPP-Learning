// C++ program to find area and perimeter of rectangle
#include<iostream>
using namespace std;
int areaRectangle(int a, int b){
    int area = a*b;
    return area;
}
int periRectangle(int a, int b){
    int perimeter = 2*(a+b);
    return perimeter;
}
int main(){
    int a = 5;
    int b = 6;
    cout<<"Area = "<<areaRectangle(a,b)<<endl;
    cout<<"Perimeter = "<<periRectangle(a,b)<<endl;

    return 0;
}