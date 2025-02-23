//program- greeting to the user, using function
#include <iostream>
using namespace std;

void greeting(string name){
    cout << "Hello, " << name <<" Have a nice day!";
}

int main(){

    string name;
    cout <<"Welcome!!" << endl;
    cout <<"Please Enter Your name: ";
    cin >> name;

    greeting(name);

    return 0;
}