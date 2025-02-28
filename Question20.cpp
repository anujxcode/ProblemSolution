//program - ternary operator 
//  condition ? expression1 : expression2;
#include<iostream>
using std::cin;
using std::cout;


int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin >>marks;

    marks >=60 ? cout<<"you pass" : cout<<"you fail";


}