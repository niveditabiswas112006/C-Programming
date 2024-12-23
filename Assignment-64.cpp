// 64. Destructor:
// code statement:
#include <iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"calling constructor"<<endl;
    }
    ~demo(){
        cout<<"destructor is calling: delete object"<<endl;
    }
};
int main(){
    cout<<"entry scope"<<endl;
    demo d;
    demo d2;
    cout<<"exit scope"<<endl;
    return 0;
}