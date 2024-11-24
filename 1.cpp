//Program in C++ to calculate the percentage of marks of a student in 5 subjects

#include <iostream>
using namespace std;

int main() {
    float subject1, subject2, subject3, subject4, subject5, totalMarks, percentage;

    // Input marks for each subject
    cout << "Enter marks for Subject 1: ";
    cin >> subject1;
    cout << "Enter marks for Subject 2: ";
    cin >> subject2;
    cout << "Enter marks for Subject 3: ";
    cin >> subject3;
    cout << "Enter marks for Subject 4: ";
    cin >> subject4;
    cout << "Enter marks for Subject 5: ";
    cin >> subject5;

    // Assuming each subject is out of 100 marks
    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (totalMarks / 500) * 100;

    // Display the percentage
    cout << "Total Marks: " << totalMarks << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}