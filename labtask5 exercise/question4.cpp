#include <iostream>
using namespace std;

int main() {
    int value;

    // Prompting the user for an integer value between 5 and 10
    cout << "Enter an integer value between 5 and 10: "<<endl;
    while (true) {
        std::cin >> value;

        // Checking if the input is a valid integer
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(INT_MAX, '\n'); // Ignore the rest of the current line
            cout << "Sorry, you entered an invalid number, Please try again: " <<endl;
            continue;
        }

        // Checking if the integer value is between 5 and 10
        if (value >= 5 && value <= 10) {
            break; // Exit the loop if the value is within the range
        } else {
            cout << "You entered " << value << ". please enter a number between 5 and 10: " <<endl;
        }
    }

    // Informing the user that their input value has been accepted
    cout << "Your input value(" << value <<") has been accepted." << endl;

    return 0;
}