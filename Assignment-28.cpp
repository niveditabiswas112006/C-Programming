// 28. W.A.P a program to make a grading system using if else statement.
#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks: ";
    cin>>marks;
    if (marks >= 90){
        cout<<"grade:A"<<endl;
    }
    else if (marks >= 80){
        cout<<"grade:B"<<endl;
    }
    else if (marks >= 70){
        cout<<"grade:C"<<endl;
    }
    else if (marks >= 60){
        cout<<"grade:D"<<endl;
    }
    else if (marks >= 50){
        cout<<"grade;F"<<endl;
    }
    return 0;
    
}