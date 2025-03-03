// program - lucky draw game

#include <iostream>
#include <ctime>
#include <cctype>
#include <thread>
#include <chrono>

using std::cin;
using std::cout;

void LuckyDraw()
{
    srand(time(0)); // seed genrated for random number
    int luckNum = rand() % 10 + 1;

    switch (luckNum)
    {
    case 1:
        cout << "You won the Rs.1 lakh!!!";
        break;
    case 2:
        cout << "you won the Rs. 50,000!!";
        break;
    case 3:
        cout << "you won the Rs. 10,000";
        break;
    case 4:
        cout << "you won the Rs. 5,000";
        break;
    default:
        cout << "Ohoo!! beter luck next time";
    }
}

void display()
{

    char option, opt;

    cout << "\t\tWelcome to the jungle\t\t\n";
    cout << "****************************************\n";
    cout << "Want to test you luck?(Y/N): ";
    cin >> option;

    opt = tolower(option);
    switch (opt)
    {
    case 'y':
        char start;

        do{
            cout << "\n\nPress 'S' for play\nPress 'n' for exit\nEnter choice: ";
            cin >> start;

            switch (tolower(start))
            {
            case 's':
                cout << "Please wait..........\n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                cout << "Checking your luck.......\n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                cout << "counting down. 3";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                cout << " 2";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                cout << " 1";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                cout << "\n********************************************\n";
                LuckyDraw();
                break;
            case 'n':
                break;
            default:
                cout << "Invalid Selection please press 'S'";
            }

        }while(tolower(start) != 'n');
        break;

    case 'n':
        cout << "oohoo!!";
        break;

    default:
        cout << "not valid response";
    }
}

int main()
{
    display();
}