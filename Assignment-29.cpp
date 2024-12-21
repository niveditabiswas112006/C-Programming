// 29. W.A.P a program to display reverse a given number using.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int rev = 0;
    while (n > 0){
        rev = rev * 10 + n % 10;
        n/= 10;
    }
    cout<<"The reverse of the number is: "<<rev <<endl;
    return 0;
}