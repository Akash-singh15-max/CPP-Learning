// Distance between two points
#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x,y;
    friend void distance(point o1, point o2);
    public:
        point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};
void distance(point o1, point o2){
    int dist;
    dist = sqrt(pow(o2.x-o1.x,2)+pow(o2.y-o1.y,2));
    cout<<"The distance between the point is "<<dist<<endl;
}
int main(){
   
    point p(1,1);
    p.displayPoint();
    point q(4,6);
    q.displayPoint();
    distance(p,q);
    return 0;
}