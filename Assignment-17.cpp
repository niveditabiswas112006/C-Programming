// 17. W.A.P a program to calculate to check if a variable is positive, negative and zero. 
#include <iostream>
using namespace std;
int main(){
    int num = -5;
    if (num > 0){
        cout<<"The number is positive "<<endl;
    }
    else if (num < 0){
        cout<<"The number is negative "<<endl;
    }
    else {
        cout<<"The number is zero "<<endl;
    }
    return 0;
}