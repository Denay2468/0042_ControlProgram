#include <iostream>
using namespace std;

// Function to calculate average of two scores
float Average(float a, float b){
    return (a+b)/2;
}

// Function to determine graduation status using nested if
string GraduationStatus(float r){
    if (r >= 60)
        if(r > 80){
            return "Graduated with Distinction";
        }
        else{
            return "Graduated with Good Standing";
        }
    else
        return "Failed";
}

int main(){
    float engScore, mathScore, average;
    string status;

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
