// Program to demonstrate if-else statement
#include <iostream>
using namespace std;

// Function to calculate average of two scores
float Average(float a, float b){
    return (a+b)/2; // Add both scores and divide by 2
}

// Function to determine pass or fail using if-else
string GraduationStatus(float r){
    // If average is 60 or above, student passes
    if (r >= 60)
        return "Passed";
    // Otherwise student fails
    else
        return "Failed";
}

int main(){
    float engScore, mathScore, average; // Variables for scores and average
    string status; // Variable to store graduation status

    // Input section
    cout << "Enter English score = ";
    cin >> engScore;
    cout << "Enter Math score = ";
    cin >> mathScore;

    // Calculate average and display result
    average = Average(engScore, mathScore);
    cout << "Graduation status = " << GraduationStatus(average) << " ,with average score = " << average << endl;

    return 0;
}
// End of ElseIf program