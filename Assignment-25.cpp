// 25. W.A.P write a program to calculate the factorial of a given number using loops.
#include <iostream>
using namespace std;
int main() {
    double n;
    cout << "Enter the number: ";
    cin >> n;
    double fact = 1;
    for (double i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "The factorial of " << n << " is: " << fact << endl;
    return 0;
}