// program- wirte a program that takes an integer N and calculates its factorial !n

#include <iostream>
using std::cout;
using std::cin;


int main(){

    int num, result = 0;
    cout<<"Enter value to find it's factorial: \n";
    cout<<"Enter: ";
    cin >> num;
    int count = num;

    while(count >= 1){
        count--;
        result = num*count;
    }
    cout<< num <<"! 's value is: "<<result;

}