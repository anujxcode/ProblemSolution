// Sum of n natuarl number using loop
#include <iostream>

int main(){

    int n;
    
    if(n < 1){
        std::cout << "entered number is not a Natural number!!!!";
    }
    else
    {
        std::cout << "This will return the sum of n natural number" ;
        std::cout <<"Enter value of N: ";
        std::cin >> n;

        int val=1, sum = 0;

        while(val <= n){
            sum = sum + val;
            val++;
        }

        std::cout << "The sum is: " << sum;
    }
  

    return 0;
}