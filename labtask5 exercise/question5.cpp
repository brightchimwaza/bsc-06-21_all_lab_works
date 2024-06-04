#include <iostream>
#include <limits>// provides a set of templates and constatants for working with numeric limits

using namespace std;
 
  // Three functions for calculating the area of triangle, rectangle and square respectively
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);


int main() {
    int choice; // declaring the variable choice
    double base, height, length, width, side;

    // requesting the user to select one the choice
    do {
        cout << "Select the area of the shape to calculate:" << endl;
        cout << "1 Square" << endl;
        cout << "2 Rectangle" << endl;
        cout << "3 Triangle" << endl;
        cout << "4 Quit program" << endl;
        cout << " " << endl;
        cout << "Enter selection:";
        cin >> choice;

    //processing the choice selected by the user and requesting the user to input values for further processing to come up with the area according to the choice selected
        switch (choice) {
            case 1 :
             cout << "Enter the side of the square: ";
                cin >> side;
                cout << "The area of the square is " << calculateSquareArea(side) << endl;
                break;

                
            case 2:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "The area of the rectangle is " << calculateRectangleArea(length, width) << endl;
                break;

            case 3:
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin>> height;
                cout << "The area of the triangle is " << calculateTriangleArea(base, height) << endl;
                break;
               
            case 4:
                cout << "Exiting program." << endl;
                break;

            default:{
                
            cin.clear();//clears any error flags that may have been set on the "cin" stream
            cin.ignore(numeric_limits<streamsize>::max(), '\n');// this line ignores any remaining character in the input buffer
            cout <<"your input " << choice <<" you entered is invalid, please enter the valid input!!"<<endl;
        }
        
        }
        }
     while (choice != 4 );
    
    return 0;

   
}

//Defining functions that will be returning the exact values of area according to the choice selected
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}
