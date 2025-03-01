//program- check the vowel with validation using <cctype> header file
#include<iostream>
#include<cctype>
using std::cout;
using std::cin;

bool isVowel(char alpha){
    alpha = tolower(alpha);

    if(alpha=='a' || alpha =='e' || alpha =='i' || alpha =='o' || alpha=='u' )
    {
        return true;
    }
    else{
        return false;
    }
}

int main(){
    char alphabet;

    cout << "Enter a letter A-Z to check it's vowel or consonesn\n";
    cout<<"Enter your input: ";
    cin >> alphabet;

    //isalpha() return true if alphabet is entered

    if(!isalpha(alphabet)){
        cout<<"only alphabet is allowed to enter";
    }
    else{
        if(isVowel(alphabet)){
            cout<<"It's a VOWEL!!";
        }
        else{
            cout<<"it's CONSONANT";
        }
    }

    return 0;
}