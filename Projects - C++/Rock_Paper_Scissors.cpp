// Rock Paper Scissors
#include<iostream>
#include<time.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int GenerateRandomNumber(int n){
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
    else if (char1=='p' && char2=='r')
    {
        return 1;
    }
    else if (char1=='r' && char2=='p')
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
    
}
int main(){
    char playerChar, compChar;
    int playerScore = 0, compScore = 0, temp;
    char dict[]={'r','p','s'};
    system("cls");
    cout<<"Welcome to the game"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        cout<<"Player's Turn:"<<endl;
        cout<<"Enter 1 for Rock, 2 for Paper and 3 for Scissor: ";
        cin>>temp;
        getchar();
        playerChar = dict[temp-1];
        cout<<"You choose: "<<playerChar<<endl;
        
        
        
        temp = GenerateRandomNumber(3)+1;
        compChar = dict[temp-1];
        cout<<"CPU choose: "<<compChar<<endl;
        
        if (Greater(playerChar,compChar)==-1)
        {
            playerScore+=1;
            compScore+=1;
            
            cout<<"It's a draw"<<endl;
        }
        else if (Greater(playerChar,compChar)==1)
        {
            playerScore+=1;
            cout<<"You won"<<endl;
        }
        else{
            compScore+=1;
            cout<<"CPU won"<<endl;
        }
        cout<<"Your Score: "<<playerScore<<endl;
        cout<<"CPU Score: "<<compScore<<endl;
    }   
    if (playerScore>compScore)
    {
        cout<<"\nYou won the game"<<endl;
    }
    else if (playerScore<compScore)
    {
        cout<<"\nCPU won the game"<<endl;
    }
    else{
        cout<<"\nIt's a draw game"<<endl;
    }

    return 0;
}