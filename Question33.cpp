//program - understanding sizeof() function 
//program that tells us size of every variable

#include<iostream>
using std::cin;
using std::cout;


int main(){
    double gpa = 7.9;
    double marks[] = {4.5,3.7,7.9};
    cout<<sizeof(marks);
    return 0;
}