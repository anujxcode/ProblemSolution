// Program to check wather you can vote or note 

#include<iostream>
using std::cout;
using std::cin;


bool isValidVoter(int age, int voterid){
    if(age >= 18 && voterid == 1){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int age,voterid;
    cout<<"Welcome to online vote system\n";
    cout<<"Enter Age: ";
    cin >>age;
    cout<<"Do you have id? press 1 for 'YES' |  press 0 for 'NO'";
    cin>>voterid;

    if(isValidVoter(age,voterid)){
        cout<<"you can vote!!";
    }
    else{
        cout<<"you can't vote!!";
    }
}