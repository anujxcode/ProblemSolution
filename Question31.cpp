//program- rock,paper scissor game

#include<iostream>
using std::cout;
using std::cin;

//functions
char getUserInput();
char getCPUInput();
void showInput(char choice);
void chooseWinner(char player, char computer);


//main function
int main(){
    char player, CPU;
    player = getUserInput();
    cout<<player;

    return 0;
}


//function defination
char getUserInput(){
    char player;
    cout<<"Welcome to Rock Paper Scissor Game!\n";

    do{
    cout<<"-------------------------------------\n";
    cout<<"Enter 'r' for rock\nEnter 'p' for paper \nEnter 's' for scissor\nChoose any one: ";
    cin >>player;
    }while(player !='r' && player != 'p' && player !='s');

    return player;
}
