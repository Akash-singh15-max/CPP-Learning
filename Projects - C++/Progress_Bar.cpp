// Rock Paper Scissors
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
int generateRandomNumber(int n){
    srand(time(NULL));
    return rand()%n;
}
int Greater(char char1, char char2){
    if (char1==char2)
    {
        return -1;
    }
    if (char1=='r' && char2=='s')
    {
        return 1;
    }
    else if (char1=='s' && char2=='r')
    {
        return 0;
    }
    else if (char1=='s' && char2=='p')
    {
        return 1;
    }
    else if (char1=='p' && char2=='s')
    {
        return 0;
    }
    else if (char1=='p' && char2=='r')
    {
        return 1;
    }
    else if (char1=='r' && char2=='p')
    {
        return 0;
    }   
}
int main(){
    int playerScore = 0, compScore = 0;
    char playerChar, compChar, temp, i;
    char dict[] = {'r','p','s'};
    system("cls");
    cout<<"\n\n***Welcome to the Game***"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Player Turn"<<endl;
        cout<<"Enter 1 for Rock, 2 for Paper and 3 for scissor"<<endl;
        cin>>temp;
        getchar();
        playerChar = dict[temp-1];
        cout<<"You choose:\t"<<playerChar<<endl;

        cout<<"\nCPU Turn"<<endl;
        temp = generateRandomNumber(3)+1;
        compChar = dict[temp-1];
        cout<<"CPU Choose:\t"<<compChar<<endl;
        if (Greater(playerChar,compChar)==1)
        {
            playerScore+=1;
            cout<<"You Won"<<endl;
        }
        else if (Greater(compChar,playerChar)==-1)
        {
            playerScore+=1;
            compScore+=1;
            cout<<"It's a Draw"<<endl;
        }
        else{
            compScore+=1;
            cout<<"CPU Won"<<endl;
        }
        cout<<"Your Score:\t"<<playerScore<<"\nCPU Score:\t"<<compScore<<endl;

    }
    if (playerScore>compScore)
    {
        cout<<"You won the Game"<<endl;
    }
    else if (compScore>playerScore)
    {
        cout<<"CPU won the Game"<<endl;
    }
    else{
        cout<<"It's a draw game"<<endl;
    }

    return 0;
}