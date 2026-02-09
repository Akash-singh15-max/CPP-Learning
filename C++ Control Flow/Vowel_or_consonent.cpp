// #include<iostream>
// using namespace std;
// void vowelOrConsonent(char x){
//     if (x == 'a' || x == 'A'||
//         x == 'e' || x == 'E'||
//         x == 'i' || x == 'I'||
//         x == 'o' || x == 'O'||
//         x == 'u' || x == 'U')
//     {
//         cout<<"Vowel"<<endl;

//     }
//     else{
//         cout<<"Consonent"<<endl;
//     }
    
// }
// int main(){
//     vowelOrConsonent('a');
//     vowelOrConsonent('B');

//     return 0;
// }




// check vowel or consonant using find() function
#include<iostream>
#include<string>
using namespace std;
int isVowel(char ch){
    string str = "aeiouAEIOU";
    return (str.find(ch)!=string::npos);
}
int main(){
    if (isVowel('a'))
    {
        cout<<"a is vowel"<<endl;
    }
    else{
        cout<<"a is consonant"<<endl;
    }

    return 0;
}