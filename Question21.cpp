//program - check the consonant and vowels using basic code
// && (and) - when two or more all condition are true than execute
// || (or)- check if at least one of two conditions is true
// ! (not)- reverses the logical state of its operand.


#include<iostream>
using std::cout;
using std::cin;

bool isVowel(char alphabet){

    if(alphabet == 'A' || alphabet =='a'){
        return true;
    }
    else if(alphabet =='E' || alphabet =='e'){
        return true;
    }
    else if(alphabet =='I' || alphabet =='i'){
        return true;
    }
    else if(alphabet =='O' || alphabet =='o'){
        return true;
    }
    else if(alphabet =='U' || alphabet =='u'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    char alphabet;

    cout << "Enter a letter A-Z to check it's vowel or consonant\n";
    cout<<"Enter your input: ";
    cin >> alphabet;

    if(isVowel(alphabet)){
        cout<<"it's a Vowel";
    }
    else{
        cout<<"it's consonant";
    }

    return 0;
}