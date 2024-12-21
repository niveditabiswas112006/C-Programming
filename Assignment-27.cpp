// 27. W.A.P a program to check whether a given number is prime or not using loop.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool is_prime = true;
    for (int i = 2; i < n; i ++){
        if (n % i == 0){
            is_prime = false;
            break;
        }
    }
    if (is_prime){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}