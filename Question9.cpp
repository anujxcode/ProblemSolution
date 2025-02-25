//understanding namespace in c++
#include<iostream>

namespace first{
    char grade = 'A';
}

namespace second{
    char grade = 'B';
}


int main(){
    using namespace first;// by using this we can directly use grade = 'A' without writing : first::grade
    

    std::cout << grade <<"\n";
    std::cout << second::grade <<"\n";

}