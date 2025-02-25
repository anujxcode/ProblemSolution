// program to encrypt and decrypt text in c++

#include <iostream>
#include<string>
#include<vector>
using namespace std;


// Encryption function
void Encryption(){
    string msg;
    cout << "**************Write Your Massage**************\n";
    getline(cin,msg);

    int counter = 0;
    while(counter < msg.length()){

        cout << int(msg[counter]) <<" ";
        counter++;
    }
    

}

void Decryption(){
    string codedMsg;
    cout <<"*****************Write your Coded Massage****************\n";
    getline(cin,codedMsg);

    // vector<string> word;
    // stringstream ss(codedMsg);   //stringstream ss(sentence); → Breaks the sentence into words.
    // string word;

    // while (ss >> word)
    // {
    //     word.push_back(word);
    // }
    

    // int counter = 0;
    // while(counter < codedMsg.length()){

    //     cout << char(codedMsg[counter]) <<" ";
    //     counter++;
    // }
}


int main(){
    // Encryption();
    Decryption();
}