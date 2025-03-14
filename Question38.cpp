//Porgram- wish happy holi 
#include<iostream>
#include<thread>
#include<chrono>

using std::cout;
using std::cin;

void TimeDelay(int sec){
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}


void happyHoli(std::string name){
    cout<<"Happy Holi ";
    TimeDelay(2);
    cout <<name ;
    TimeDelay(1);
    cout<<" And your Family!!";
}


int main(){
    cout<<"Loding......................\n";
    TimeDelay(1);
    cout<<"Making your holi happy.....\n";
    TimeDelay(1);
    happyHoli("anuj");


    return 0;
}