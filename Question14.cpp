// program - calculate the hypotenus of right- triangle
#include <iostream>
#include<cmath>

using std::cin;
using std::cout;


void hypotenuse(double perpendicular, double base){
    double hypotenuse = sqrt(pow(perpendicular,2) + pow(base,2));
    cout << "Hypotenuse is: " <<hypotenuse;
}

int main(){
    double p,b;
    cout<<"Enter the base and perpendicualar";
    cout<<"\nEnter perpendicular: ";
    cin >> p;
    cout <<"\nEnter base: ";
    cin >> b;

    hypotenuse(p,b);


}

