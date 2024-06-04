#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()

using namespace std;

int main() {

    // First we should Initialize random seed that will initialize a pseudo-random number generator
    srand(time(0));

    // (i)Generating a random number between 0 and 11 that will be assigned to the integer variable of daysUntilExpiration 
    int daysUntilExpiration = rand() % 12;

    // ((ii)&(iii))Check the subscription status and output the appropriate message based on the condition fulfilled using if-else statements
    if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired." << endl;
    } else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day! " << endl;
        cout << "Renew now and save 20%!" <<endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}