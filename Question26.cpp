//program to create pattern of symbols

#include<iostream>
using std::cout;
using std::cin;


int main(){

    int columns, rows;
    char sysm;
    cout<<"Enter the number of rows: ";
    cin >>rows;

    cout<<"Enter the number of columns: ";
    cin >> columns;

    cout<<"Enter any symbol: ";
    cin >> sysm;

    for(int i = 1; i <= rows; i++){
        
        for(int j= 1; j <= columns;j++){
            cout<<sysm <<" ";
        }
        cout<<"\n";
    }
}