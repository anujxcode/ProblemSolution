// This program converts temperature units (Celsius, Fahrenheit, Kelvin).

#include<iostream>
using std::cout;
using std::cin;

double CelToFah(double cel){
    return 9/5*cel + 32;
}

double FahToCel(double fah){
    return 5/9*(fah-32);
}

double CelToKel(double cel){
    return cel + 273;
}

double KelToCel(double kel){
    return kel - 273;
}

double FahToKel(double fah){
    return 5/9*fah + 241;
}

double KelToFah(double kel){
    return 9/5*kel -241;
}

double input(char unit){
    double value;
    cout<<"Enter value in "<<unit <<": ";
    cin >> value;
    return value;
}

void display(){
    cout<<"*************************************************************\n";
    cout<<"*******************Temprature Converter********************\n";
    cout<<"*************************************************************\n";
    cout<<"press: 1 to Convert Celsius to Fahrenheit\nPress: 2 to Convert Fahrenheit to Celsius\nPress: 3 to Convert Celsiust to Kelvin\nPress: 4 to Convert Kelvin to Celsius\nPress: 5 to Convert Kelvin to Fahrenheit\nPress: 6 to Convert Fahrenheit to Kelvin\n\n";

    int option;
    cout<<"Enter your option: ";
    cin >> option;

    switch(option){
        case 1:
            cout<<CelToFah(input('C'));
            break;
        case 2:
            cout<<FahToCel(input('F'));
            break;
        case 3:
            cout<<CelToKel(input('C'));
            break;
        case 4: 
            cout<<KelToCel(input('K'));
            break;
        case 5:
            cout<<KelToFah(input('K'));
            break;
        case 6:
            cout<<FahToKel(input('F'));
            break;
        default:
            cout<<"invalid input";

    }
}

int main(){
    display();
    return 0;
}