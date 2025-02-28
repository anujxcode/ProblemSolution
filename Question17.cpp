//program- understanding swtich / alternative of else if statement

#include<iostream>
using std::cin;
using std::cout;

int main(){
    int month;
    cout<<"Enter the month(1-12)";
    cin >> month;

    switch(month){
        case 1:
            cout<<"it's January";
            break;
        
        case 2:
            cout<<"it's Febuary";
            break;
        
        case 3:
            cout<<"it's march";
            break;
        
        case 4:
            cout<<"it's April";
            break;
        
        case 5:
            cout<<"it's may";
            break;
        
        case 6:
            cout<<"it's june";
            break;
        
        case 7:
            cout<<"it's july";
            break;
        
        case 8:
            cout<<"it's august";
            break;
        
        case 9:
            cout<<"it's september";
            break;
        
        case 10:
            cout<<"it's october";
            break;

        case 11:
            cout<<"it's November";
            break;
            
        case 12:
            cout<<"it's december";
            break;

        default:
            cout<<"Please enter number only 1 to 12";
        
    }
}

