// program- wirte a program that takes an integer N and calculates its factorial !n

#include <iostream>
using std::cout;
using std::cin;


int main(){

    const int MIN = 1;
    int num;
    cout<<"Enter value to find it's factorial: \n";
    cout<<"Enter: ";
    cin >> num;
    int result = num;

    while(num > MIN){
        num --;
        cout<<num <<"\n";
        result = num*result;
        
    }


    cout<< num <<"! 's value is: "<<result;

}