// practical:

// 4. Write a program to demonstrate function overloading by creating three functions
// named max:
// int max(int a, int b) to find the larger of two integers.
// double max(double a, double b) to find the larger of two double values.
// #include <iostream>
// using namespace std;
// int max(int a, int b) {
//     return (a > b) ? a : b;
// }
// double max(double a, double b) {
//     return (a > b) ? a : b;
// }
// int main() {
//     int int1 = 56, int2 = 43;
//     double double1 = 56.5, double2 = 78.5;
//     cout << "Larger integer: " << max(int1, int2) << endl;
//     cout << "Larger double: " << max(double1, double2) << endl;
//     return 0;
// }