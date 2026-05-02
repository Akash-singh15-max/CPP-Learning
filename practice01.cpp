#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    // Different ways to create a vector
    vector<int> vec1;// zero length integer vector
    display(vec1);

    vector<char> vec2;// 4 element character vector
    vec2.push_back('A');
    display(vec2);

    
    vector<char>vec3(vec2);// 4 element character vector from vec2
    display(vec3);

    vector<int> vec4(6,69);
    vector<int> vec5(4,420);
    vec4.swap(vec5);
    display(vec4);
    display(vec5);
    // cout<<vec4.size();
    return 0;
}