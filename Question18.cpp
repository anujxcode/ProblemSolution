//program- what's your grade in exam

#include<iostream>
using std::cout;
using std::cin;

void Grade(){
    char grade;
    cout <<"\n\nEnter the grade 'A to F' ";
    cin>>grade;

    switch(grade){
        case 'A':
            cout<<"you did grate";
            break;

        case 'B':
            cout<<"you did good";
            break;

        case 'C':
            cout<<"you did okay";
            break;
        case 'D':
            cout<<"you did not do good";
            break;
        
        case 'F':
            cout<<"you fail the exam";

        default:
            cout <<"not valid grade";
    }

}

int main(){
    Grade();
    return 0;
}