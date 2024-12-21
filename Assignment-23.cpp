//23. W.A.P a simple grading system using switch to select the grade based on marks.
#include <iostream>
using namespace std;
int main() {
    int marks;
    char grade;
    cout << "Enter the marks: ";
    cin >> marks;
    switch (marks / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'E';
            break;
        default:
            grade = 'F';
            break;
    }
    cout << "The grade is: " << grade << endl;
    return 0;
}