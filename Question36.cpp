//program -  10 random number genrated and stored in array and user can serch if thier enter number is in or not

#include<iostream>
#include<ctime>
#include<random>
#include <thread>
#include <chrono>

using std::cin;
using std::cout;

//globale array 
int RandNums[10];

//time dealy
void timeDealy(int time){
    std::this_thread::sleep_for(std::chrono::seconds(time));
}

//random number genrator
void randomNumber(){
    for(int i = 0; i < sizeof(RandNums)/sizeof(RandNums[0]); i++){
        srand(time(0));
        timeDealy(1);
        int num = rand() % 10 + 1;
        RandNums[i] = num;
    }

}

//search element
int searchElement(int array[],int size, int userinput){

    for(int i = 0; i < size; i++){
        if(array[i] == userinput){
            return i;
        }
    }

    return -1;
}


int main(){
    cout<<"Generating............\n";
    randomNumber();

    int userinput,index,size;
    size = sizeof(RandNums)/sizeof(RandNums[0]);
    cout<<"Enter a number to check it's in random number of not(1 to 10)\n";
    cout<<"Enter Num: ";
    cin >>  userinput;
    index = searchElement(RandNums,size,userinput);

    if(index != -1){
        cout<<"Element is at: "<<index <<"\n";
    }else{
        cout<<"Element not found\n";
    }

    cout<<"\nWait 5 seconds.........to see random numbers\n";
    timeDealy(2);
    
    for(int n : RandNums){
        cout<<n <<" ";
    }
}