// program to encrypt and decrypt text in c++

// librarys used
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;


// Encryption function
void Encryption(){
    string msg;
    cout << "**************Write Your Massage**************\n";
    getline(cin>>ws,msg);

    cout<<"\n\nCoded***************************************: \n";
    int counter = 0;
    while(counter < msg.length()){

        cout << int(msg[counter]) <<" ";
        counter++;
    }
    

}
// Decrypiton funcction
void Decryption(){
    string codedMsg;
    cout <<"*****************Write your Coded Massage****************\n";
    getline(cin>>ws,codedMsg);

   stringstream ss(codedMsg); //create a string stream object
   string word;

   cout<<"\n\nDecoded***************************************: \n";
   while(ss >> word){
        cout << char(stoi(word)) <<"";

   }
}

// Display function
void Display(){
    int opt;
    do{
        cout<<"\n\nPress: 1 for Encryption\nPress: 2 for Decryption\nPress: 3 for Exit\nEnter here: ";
        cin >> opt;

        switch(opt){
            case 1:
                Encryption();
                break;
            case 2:
                Decryption();
                break;
            case 3:
                cout<<"Exiting program.........";
                break;
            default:
                cout<<"invalid";
        }
    }while(opt != 3);
}

// main function
int main(){
    Display();
}