//W.A.P write a program to perform arithmetic operations using switch case.
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    char o;
    cout << "Enter the Operation to be performed: ";
    cin >> o;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    switch (o) {
        case '+':
            cout << "The sum of the two numbers is: " << (a + b) << endl;
            break;
        case '-':
            cout << "The subtraction of the two numbers is: " << (a - b) << endl;
            break;
        case '*':
            cout << "The multiplication of the two numbers is: " << (a * b) << endl;
            break;
        case '/':
            cout << "The division of the two numbers is: " << (a / b) << endl;
            break;
        default:
            cout << "Invalid Operation!" << endl;
            break;
    }
    return 0;
}