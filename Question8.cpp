// Program to understand namespace
#include <iostream>
using namespace std; //here we use all the standrad name space in std we don't have to wirte std::cout ;
// name space
namespace one{
    int myvar = 1;
}
namespace two{
    int myvar = 2;
}

int main(){
    int myvar = 0;
    std::cout << "directly access myvar: " <<myvar << "\n";
    std::cout << "used namespace one myvar: " <<one::myvar<< "\n";
    std::cout << "used namesapce two myvar: " <<two::myvar<<"\n";
}