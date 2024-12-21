// 31. W.A.P a program to check whether given number is armstrong number or not using loops.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int temp = n;
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        sum += rem * rem * rem;
        n/= 10;
    }
    if (sum == temp){
        cout<<temp<<" is an armstrong number. "<<endl;
    }
    else{
        cout<<temp<<" is not an armstrong number. "<<endl;
    }
    return 0;
}