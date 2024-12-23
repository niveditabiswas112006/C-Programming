// 60. constructor ans destructor of public / private:
// code statement:
#include <iostream>
using namespace std;
// declare class
class wall{
    private:
    int a;
    public:
    // declare conductor to initialize variable.
    wall(){
    cout<<"creating a wall please enter value for a is: "<<endl;
    cin>>a;
    cout<<"a = " << a <<endl;
    }
};
int main(){
    wall wall1;
    return 0;
}