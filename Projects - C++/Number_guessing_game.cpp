// Number guessing game
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));
    system("cls");
    cout<<"Welcome to the world of guessing number"<<endl;
    random = rand()%100+1;
    do
    {
        cout<<"\n\nEnter your guess between (1 to 100) : ";
        cin>>guess;
        if (guess>random)
        {
            cout<<"\nGuess some smaller number."<<endl;
            no_of_guess++;
        }
        else if (guess<random)
        {
            cout<<"\nGuess some larger number."<<endl;
            no_of_guess++;
        }
        else{
            no_of_guess++;
            cout<<"\nCongratulation, you have successfully guess the number in "<<no_of_guess<<" attempts."<<endl;
        }
        
        
    } while (guess != random);
    cout<<"\nBye bye, thanks for playing...."<<endl;
    cout<<"Developed by Akash_kr_singh"<<endl;
    

    return 0;
}