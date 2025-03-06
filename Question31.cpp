//program- rock,paper scissor game

#include<iostream>
#include<ctime>

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

    cout<<"***********************************\n";
    cout <<"your choice is: ";
    showInput(player);

    CPU = getCPUInput();
    cout<<"Computer's Choice is: ";
    showInput(CPU);
    cout<<"***********************************\n";

    chooseWinner(player,CPU);

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

void showInput(char choice){

    switch (choice)
    {
    case 'r':
        cout<<"Rock\n";
        break;

    case 'p':
        cout<<"paper\n";
        break;

    case 's':
        cout<<"scissor\n";
        break;
    
    default:
        break;
    }


}

char getCPUInput(){

    srand(time(0));
    int num;
    num = rand()%3 + 1;

    switch(num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }

    return 0;
}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r':
            if(computer == 'r'){
                cout<<"it's a tie\n";
            }
            else if(computer =='p'){
                cout <<"You lose!\n";
            }
            else{
                cout <<"You won!!!\n";
            }
            break;
        
        case 'p':
            if(computer == 'p'){
                cout<<"it's a tie\n";
            }
            else if(computer =='s'){
                cout<<"you lose!\n";
            }
            else{
                cout<<"you won!!\n";
            }
            break;
        
        case 's':
            if(computer == 's'){
                cout<<"it's a tie\n";
            }
            else if(computer == 'r'){
                cout<<"you lose!\n";
            }
            else{
                cout<<"you won!!!\n";
            }
            break;
        
        
        
    }
}