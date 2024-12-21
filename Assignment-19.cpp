// 19. W.A.P a program to calculate to check if a number is even or odd. 
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number to check: ";
    cin>>a;
    if(a % 2 == 0){
        cout<<"The number is even";
    }
    else{
        cout<<"The number is odd";
    }
    return 0;
}