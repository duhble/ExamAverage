// Title: ExamAverage.cpp
// Description: This program takes the five exam scores from the user and calculates the average.
// Author: Dylan Dover
// Date: 09-03-2022


#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarations
    double exam1;
    double exam2;
    double exam3;
    double exam4;
    double exam5;
    int Average;
    int Remainder;

    // Start
    cout << "Program Title: ExamAverage" << endl;
    cout << "Program Description: This program take the five exam scores from the user and calculates the average." << endl << endl;

    // Input
    cout << "Input Exam 1 Score: "; cin >> exam1;
    cout << "Input Exam 2 Score: "; cin >> exam2;
    cout << "Input Exam 3 Score: "; cin >> exam3;
    cout << "Input Exam 4 Score: "; cin >> exam4;
    cout << "Input Exam 5 Score: "; cin >> exam5;

    // Calculations
    Average = (exam1 + exam2 + exam3 + exam4 + exam5) / 5;
    Remainder = Average % 5;

    // Output
    cout << "Exam Average: " << Average << "." << Remainder << "%" << endl;

    return 0;
}