//program- check how good or bad your day was

#include<iostream>
using std::cout;
using std::cin;


void YourDay(){
    cout<<"Hey there please tell me about your day!\n";
    cout<<"****************************************\n";
    cout<<"NOTE: press 1 for 'yes' and  press 0 for 'no'\n\n\n";
    int yourday[10];

    cout<<"Did you wake up feeling refreshed?: ";
    cin >> yourday[0];
    cout<<"Did you have a good meal today?: ";
    cin >> yourday[1];
    cout<<"Did your plans go smoothly today?: ";
    cin >> yourday[2];
    cout<<"Did anyone or anything make you smile?: ";
    cin >> yourday[3];
    cout<<"Did you do somthing new?: ";
    cin >> yourday[4];
    cout<<"Did you feel appreciated or valued today?: ";
    cin >> yourday[5];
    cout<<"Do you get some love today?: ";
    cin >> yourday[6];
    cout<<"Did you get something done that made you feel good?: ";
    cin >> yourday[7];
    cout<<"Did you avoid overthinking or feeling down today?: ";
    cin >> yourday[8];
    cout<<"Did today feel like a day you'd want to have again?: ";
    cin >> yourday[9];   

    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum = sum + yourday[i];
    }
    
    if(sum >= 8){
        cout<<"\n\nYour have a fantastice day!!!!!";
    }else if(sum >= 5 && sum < 8){
        cout <<"\n\nyour have a good day!!";
    }else if(sum >= 3 && sum < 5){
        cout<<"\n\nyour day not so good!";
    }
    else if(sum < 3){
        cout <<"\n\nIt's okay it just a bad day?";
    }


}

int main(){
    YourDay();
    return 0;
}