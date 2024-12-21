// 12. W.A.P a program to calculate a simple interest calculation.
#include <iostream>
using namespace std;
int main(){
    double principal = 1000, rate = 10, time = 2;
    double simpleinterest = (principal * rate * time)/100;
    cout<<"simpleinterest: "<<simpleinterest<<endl;
    return 0;
}