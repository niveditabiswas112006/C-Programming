// 5. W.A.P a program to swap 2 variable without using a 3rd variable.
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    cout<<"Before swapping: a = " <<a << " , b = " <<b <<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After swapping: a = " <<a << " , b = " <<b <<endl;
    return 0;
}
