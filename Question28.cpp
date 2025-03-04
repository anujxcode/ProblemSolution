// understanding functions in c++ 
// function - a block of reusable code
//program- a function take name and write a birthday song

#include<iostream>
#include<string>
#include <thread>
#include <chrono>
using std::cout;
using std::cin;

 
void timeDealy(int time){
    std::this_thread::sleep_for(std::chrono::seconds(time));
}

void singHappyBirthday(std::string name){

    for(int i=0; i<4;i++){

        if(i != 2){
            cout<<"Happy ";
            timeDealy(1);
            cout<<"Birthday";
            timeDealy(1);
            cout<<" to";
            timeDealy(1);
            cout<<" you";
            cout<<"\n";
        }else{
            cout<<"Happy ";
            timeDealy(1);
            cout<<"Birthday";
            timeDealy(1);
            cout<<" Dear "<< name;
            cout<<"\n";
        }
    
    }
   
    
}

int main(){
    std::string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<"**************************************************\n\n";
    singHappyBirthday(name);
    singHappyBirthday(name);
    return 0;
}