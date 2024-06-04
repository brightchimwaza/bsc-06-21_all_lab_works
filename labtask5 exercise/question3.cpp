#include <iostream>
#include <string>

using namespace std;
int main() {
    // Declaring and initializing the array
    string theArray[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Iterating through each element of the array
    for (int b = 0; b < sizeof(theArray)/sizeof(theArray[0]); ++b) {

        // Checking if the current element starts with 'B'
        if (theArray[b].front() == 'B') {

            // Outputing the element onto the console
            cout << theArray[b] << endl;
        }
    }

    return 0;
}