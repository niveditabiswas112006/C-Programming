//20. W.A.P a program that displays the name of the day based on the number entered by the user (1 for Monday, 2 for Tuesday, etc.).
#include <iostream>
using namespace std;
int main() {
        int a;
        cout<<"Enter the number to day: ";
        cin>>a;
        if (a==1){
                cout<<"The day is Sunday";
        }
        else if (a==2){
                cout<<"The day is Monday";
        }
        else if (a==3){
                cout<<"The day is Tuesday";
        }
        else if (a==4){
                cout<<"The day is Wednesday";
        }
        else if (a==5){
                cout<<"The day is Thursday";
        }
        else if (a==6){
                cout<<"The day is Friday";
        }
        else {
                cout<<"The day is Saturday";
        }
        return 0;
}