//program - simple calculator;

#include<iostream>
using std::cin;
using std::cout;

void calc(){
    char op;
    double num1,num2,result;

    std::cout <<"*******************CALCULATOR*******************\n";

    cout<<"Enter wither (+, -,*,/): ";
    cin >>op;

    cout<<"Enter num1: ";
    cin >>num1;

    cout<<"Enter num2: ";
    cin >>num2;

    switch(op){
        case '+': 
            result = num1 + num2;
            break;
        
        case '-': 
            result = num1 - num2;
            break;
        
        case '*': 
            result = num1 * num2;
            break;
        
        case '/': 
            result = num1 / num2;
            break;

        default:
            cout<<"not valid opration";
    }

    cout<<"Result: "<<result;




    std::cout <<"\n************************************************";
}

int main(){
    calc();
}