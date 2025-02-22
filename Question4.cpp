// find max number from 3 number
#include<iostream>

int main(){
    int a,b,c;
    std::cout <<"\n Enter number 1: ";
    std::cin >>a;

    std::cout <<"\n Enter number 2: ";
    std::cin >>b;

    std::cout <<"\n Enter number 3: ";
    std::cin >>c;

    if(a > b){

        if(a > c){
            std::cout <<"Max is: " <<a;
        }
        else{
            std::cout<<"Max is: "<<c;
        }

    }else {
        if(b > c){
            std::cout <<"Max is "<<b;
        }
        else{
            std::cout <<"Max is: "<<c;
        }
    }

}