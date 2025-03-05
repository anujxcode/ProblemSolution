//program to calculate the surface area and volume

#include<iostream>
using std::cin;
using std::cout;

//function delaration
double LSA_cube(double side);
double TSA_cube(double side);
double VOLUME_cube(double side);
double LSA_Cuboid(double l,double b, double h);
double TSA_Cuboid(double l, double b, double h);
double VOLUME_Cuboid(double l, double b, double h);
double CSA_cylinder(double r,double h);
double TSA_cylinder(double r, double h);
double VOLUME_cylinder(double r,double h);
void display();

int main(){
    display();
}


// function defination
void display(){
    cout<<"SELECT YOUR CHOICE\n";
    cout<<"****************************************************\n";
    cout<<"Press: 1 for litral surface area of cube\n";
    cout<<"Press: 2 for total surface area of cube\n";
    cout<<"Press: 3 for volume of cube\n";
    cout<<"Press: 4 for Litral surface area of cuboid\n";
    cout<<"Press: 5 for Total surface area of cuboid\n";
    cout<<"Press: 6 for volume of cuboid\n";
    cout<<"Press: 7 for Curved surface are of cylinder\n";
    cout<<"Press: 8 for Total surface area of cylinder\n";
    cout<<"Press: 9 for volume of cylinder\n";

    int ch;
    cout<<"Enter your choice: ";
    cin >>ch;

    double side;
    double l,b,h;
    double r;

    switch(ch){
        case 1: 
            cout<<"Enter side: ";
            cin >>  side;
            cout<<"Area: "<<LSA_cube(side) <<" Unit Square";
            break;

        case 2: 
            cout<<"Enter side: ";
            cin >>  side;
            cout<<"Area: "<<TSA_cube(side) <<" Unit Square";
            break;
            
        case 3:
            cout<<"Enter side: ";
            cin >>  side;
            cout<<"volume: "<<VOLUME_cube(side) <<" Unit cube";
            break; 

        case 4:
            cout<<"Enter length: " ;
            cin >>l;
            cout<<"Enter breath: " ;
            cin >>b;
            cout<<"Enter height: " ;
            cin >> h;
            cout<<"Area: " <<LSA_Cuboid(l,b,h)<<" Unit square";
            break;

        case 5:
            cout<<"Enter length: " ;
            cin >>l;
            cout<<"Enter breath: " ;
            cin >>b;
            cout<<"Enter height: " ;
            cin >> h;
            cout<<"Area: " <<TSA_Cuboid(l,b,h)<<" Unit square"; 
            break;

        case 6: 
            cout<<"Enter length: " ;
            cin >>l;
            cout<<"Enter breath: " ;
            cin >>b;
            cout<<"Enter height: " ;
            cin >> h;
            cout<<"Area: " <<VOLUME_Cuboid(l,b,h)<<" Unit cube";
            break;

        case 7: 
            cout<<"Enter radius: " ;
            cin >>r;
            cout<<"Enter height: " ;
            cin >> h;
            cout<<"Area: "<<CSA_cylinder(r,h) <<" unit square";
            break;

        case 8: 
            cout<<"Enter radius: " ;
            cin >>r;
            cout<<"Enter height: " ;
            cin >> h;
            cout<<"Area: "<<TSA_cylinder(r,h) <<" unit square";
            break;

        case 9: 
            cout<<"Enter radius: " ;
            cin >>r;
            cout<<"Enter height: " ;
            cin >> h;
            cout<<"Area: "<<VOLUME_cylinder(r,h) <<" unit cube";
            break;

        default:
            cout<<"invalid input";
    }
}

double LSA_cube(double side){
    return 4*side*side;
}

double TSA_cube(double side){
    return 6*side*side;
}

double VOLUME_cube(double side){
    return side*side*side;
}

double LSA_Cuboid(double l, double b, double h){
    return 2*(l + b)*h;
}

double TSA_Cuboid(double l, double b, double h){
    return 2*(l*b + b*h + h*l);
}

double VOLUME_Cuboid(double l, double b, double h){
    return l*b*h;
}

double CSA_cylinder(double r, double h){
    return 2*3.14*r*h;
}

double TSA_cylinder(double r,double h){
    return 2*3.14*r*(r + h);
}

double VOLUME_cylinder(double r, double h){
    return 3.14*r*r*h;
}
