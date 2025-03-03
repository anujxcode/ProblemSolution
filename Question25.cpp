// understanding for loop 
/*
    for(int index = 1; stoping condition; index++){
        //code here
    }
*/

//program - making patterns


#include<iostream>
using std::cout;
using std::cin;

int main(){

    for(int i = 0; i < 5 ; i++){
        for(int j = 0; j < 5 ; j++){
            cout<<"@";
        }
        cout<<"#\n";
    }
    return 0;
}




