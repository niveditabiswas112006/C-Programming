// 30. W.A.P a program to calculate sum of given number using loop.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int sum = 0;
    for (int i = 0; i < n; i ++){
        int num;
        cout<<"enter the number: ";
        cin>>num;
        sum += num;
    }
    cout<<"The sum of the numbers is: "<<sum <<endl;
    return 0;
}

// 30.1 W.A.P a program to calculate sum of given number using loop.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int sum = 0;
    while (n > 0){
        sum += n - (n/10) * 10;
        n/= 10;
    }
    cout<<"The sum of the digits is: "<<sum <<endl;
    return 0;
}