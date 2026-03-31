// Program to demonstrate simple if statement
#include <iostream>
using namespace std;

int main(){
    int x; // Variable to store random number

    srand(time(0)); // Set random seed based on current time
    x = rand() % 10; // Generate random number between 0-9

    // Check if x equals 5, if so correct the value
    if (x == 5){
        x = x + 1; // Add 1 to avoid value 5
        cout << "x value has been corrected to : " << x << endl;
    }

    // Display the final number
    cout << "The given number = " << x;

    return 0;
}