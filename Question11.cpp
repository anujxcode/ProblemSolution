// program - game 
#include <iostream>
#include<random>

using std::cout;
using std::cin;

int randomNUm(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std:: uniform_int_distribution<int> dist(1,20);
    int mynum = dist(gen);
    return mynum;
}

int main(){
    cout<<"************************************************************\n";
    cout<<"****************** Guess the number ***********************\n";
    cout<<"**************  Number is between 1 to 20 ******************\n\n";

    int num = randomNUm();
    int counter=0,gassednum;
    
    do{
        cout <<"\nEnter your Guessed num: ";
        cin >>gassednum;
        
        if(gassednum > num){
            cout<<"\nYour gassed higer number";
        }else if( num > 20 && num < 1){
            cout<<"\ninvalid input";
        }else if( gassednum < num){
            cout<<"\nyou gassed lower number";
        }else if(gassednum == num){
            cout<<"\nyou guessed correct you won!!";
        }

        counter++;

    } while(gassednum != num);

    cout<<"\n\n**********************Congrats!!!****************************\n";
    cout << "Your Guessed it right: "<< num << " in :" <<  counter <<" attampt\n";
    cout<<"*****************************************************************\n";

    



}