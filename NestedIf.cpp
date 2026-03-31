// Program to demonstrate nested if statement
#include <iostream>
using namespace std;

// Function to calculate average of two scores
float Average(float a, float b){
    return (a+b)/2; // Add both scores and divide by 2
}

// Function to determine graduation status using nested if
string GraduationStatus(float r){
    // Check if student passed minimum score
    if (r >= 60)
        // Check if student scored above 80 for distinction
        if(r > 80){
            return "Graduated with Distinction"; // Highest achievement
        }
        else{
            return "Graduated with Good Standing"; // Passed but not distinction
        }
    else
        return "Failed"; // Below minimum passing score
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
