// 18. W.A.P a program to calculate to check if a number is positive, negative and zero.
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number to check: ";
    cin>>a;
    if (a > 0){
        cout<<"The number you've entered is positive ";
    }
    else if (a < 0){
        cout<<"The number you've entered is negative ";
    }
    else{
        cout<<"The number you've entered is zero ";
    }
    return 0;
}