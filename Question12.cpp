//understanding the typedef - use as alius of datatypes

#include <iostream>

typedef std::string likh_t; // correct


int main(){
    likh_t fistname;
    likh_t lastname;
    likh_t age;

    std::cout << "Enter your Frist name: ";
    std::cin >> fistname;

    std::cout << "Enter your last Name: ";
    std::cin >> lastname;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout<< "Hello "<<fistname <<" "<<lastname << " you are " <<age <<" year old.";


}

