// Program: sum of n natural numbers
#include <iostream>

int main(){

    float n, sum;
    std::cout << "This program will find sum for first n natural Number\n";
    std::cout << "Enter vlaue of n: \n";
    std::cin >> n;

    sum = (n*(n + 1))/2;
    std::cout << "The Sum is: " << sum ;

    
    return 0;
}