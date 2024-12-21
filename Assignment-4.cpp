// 4. W.A.P a program to swap 2 variable using a 3rd variable.
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int temp;
    cout<<"Before swapping: a = " <<a << " , b = " <<b <<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swapping: a = " <<a << " , b = " <<b <<endl;
    return 0;
}
