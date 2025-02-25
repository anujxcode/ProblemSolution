//how to use namespace effectivly
#include <iostream>
// using namespace std;  ---> this has thousand of name so insted of that we can use like this
using std::cout;
using std::cin;

int main(){

    int num;
    cout <<"Enter the any number: ";
    cin >> num;

    cout <<"You entered: "<<num;
}