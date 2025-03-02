// understanding the sring mathods
// var.lenght()- return the lenth of string 
// var.empty()- return true and false whether a string is empty or not
// var.clear()- clear all white spaces and other words in the string
// var.append()-append text to a string
// var.at(index)- display the character of string at index position
// var.insert(index, "@")- intert at the index position
// name.find("")- find the entered charcter or white space only first charcter
// var.erase(begining index, end index)- erase the charcter between range



// Program - writing a leave application

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){

    string school_name, school_add, sub, name,std_clss,days,reason;
    cout<<"Enter some details to write and application\n";
    cout<<"*************************************************\n";
    cout<<"Enter your name: ";
    getline(cin>>ws,name);
    
    cout<<"Enter your school name: ";
    getline(cin>>ws,school_name);

    cout<<"Enter your school address: ";
    getline(cin>>ws,school_add);

    cout<<"Enter your subject of leave: ";
    getline(cin>>ws,sub);

    cout<<"Enter your class: ";
    getline(cin>>ws,std_clss);

    cout<<"Enter no of days of leave: ";
    getline(cin>>ws,days);

    cout<<"Enter Reason of leave: ";
    getline(cin>>ws,reason);


    cout<<"\n\n\t\tApplication for leave of Absence\n\t";
    cout<<"----------------------------------------------------";
    cout<<"\nTo\nThe Principal\n"<<school_name<<"\n"<<school_add<<"\n\n";
    cout<<"Subject - "<<sub <<"\n\n";
    cout<<"Respected Sir/Madam,\n\t Most Humbly i beg to say that,i am "<<name<<" Student\n of class "<<std_clss<<" of you school.\n" <<reason<<" so i can not atten the school for "<<days <<"days.\n\n ";
    cout<<"\t Therefore, I request you to grant me leave for "<<days<<"\n . I will be thankful for your kindness.";

    cout<<"\n\nYour obediently\n"<<name<<"\n"<<std_clss;

    return 0;
}