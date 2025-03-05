// program- Bank program checking balance, deposite, withdraw

#include<iostream>
using std::cin;
using std::cout;

void display();
double deposite();
void withdraw();
void CheckBal();


int main(){
    display();
}

void display(){
    cout<<"*******************WELCOME***********************\n";
    cout<<"Press 1 : Show balance\n";
    cout<<"Press 2 : Deposit Money\n";
    cout<<"Press 3 : withdraw Money\n";
    cout<<"Press 4 : Exit\n";
    cout<<"**************************************************\n";
    int choice;
    double balance;
    do{
        
        cout<<"\n\nEnter Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                CheckBal(balance);
                break;
            
            case 2:
                balance += deposite();
                cout<<"Remaining balance: "<<balance;
                break;

            case 3:
                if(balance > withdraw()){
                    balance -= withdraw();
                    cout<<"Remaining balance: "<<balance;
                }
                else{
                    cout<<"Not enough balance !!";
                }
              
                break;
            case 4:
                cout<<"Thank you visit again!";
                break;
            default:
                cout<<"invalid input";
            
        }

    }while(choice != 4);
}

void CheckBal(double bal){
    cout<<"balance is: "<<bal;
}

double deposite(){
    double bal;
    cout<<"enter amount: ";
    cin >> bal;
    return bal;
}

void withdraw(){
    double bal;
    cout<<"enter amount: ";
    cin >> bal;
    return bal;
}