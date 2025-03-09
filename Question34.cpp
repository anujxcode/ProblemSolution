//Program - Understanding the foreach loop

#include<iostream>
using std::cin;
using std::cout;
using std::string;



int main(){
    string students[5];

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        cout<<"Enter student no " <<i+1 <<": ";
        cin >>students[i];
    }

    for(string std : students){
        cout<<std <<"\n";
    }

}