// 9. W.A.P a program to convert celsius to fahrenheit.
#include <iostream>
using namespace std;
int main(){
    float celsius, fahrenheit;
    cout<<"Enter the temperature in celsius: ";
    cin>>celsius;
    fahrenheit = (celsius * 9/5) * 32;
    cout<<"The temperature in fahrenheit is: ";
    cout<<fahrenheit <<endl;
    return 0;
}
