// 24. W.A.P a program to check whether a given year is a leap year.
#include <iostream>
using namespace std;
int main() {
        int a;
        cout<<"Enter the year to check : ";
        cin>>a;
        if (a%4==0){
                cout<<"The year is a leap year";
        }
        else {
                cout<<"The year is not a leap year";
        }
        return 0;
}