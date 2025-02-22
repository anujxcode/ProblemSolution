// program: find prime number
#include<iostream>

int main(){
    int n;
    std::cout << "\n\n*********This program Check Whether a Number is prime or note \n";
    std::cout <<"Enter a number: ";
    std::cin >> n;

    if(n < 1){
        std::cout << "not a natural number \n";
    }
    else{
        int div = 2;

       
            if(n% div == 0){
                while(div <= n){
                div ++;
                std::cout << "NOT PRIME";
                break;
                }
            }
            else{
                std::cout <<"PRMIE";

            }
        

        
    }


    return 0;
}