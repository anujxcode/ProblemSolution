// Program - understand the array
// array- a data structure that can hold multiple value accessed by index number
//only store same data type 

#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main(){

    //array
    string cars[] = {"Bmw","honda","tata"};

    for(int i = 0; i < cars->length(); i++){
        cout<<cars[i] <<"\n";
    }


    return 0;
}