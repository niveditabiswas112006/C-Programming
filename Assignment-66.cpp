// 66. multiple inheritance:
// code statement:
#include <iostream>
using namespace std;
class base1{
    public:
    int a;
    void getdata1(){
        cout<<"enter the first number";
        cin>>a;
        cout<<"value of a is: "<<a <<endl;
    }
};
class base2{
    public:
    int b;
    void getdata2(){
        cout<<"enter the second number: ";
        cin>>b;
        cout<<"value of b"<<b <<endl;
    }
};
class derived: public base1, public base2{
    public:
    int c;
    void adddisplay(){
        c = a + b;
        cout<<"addition of a & b"<<c;
    }
};
int main(){
    derived d;
    d.getdata1();
    d.getdata2();
    d.adddisplay();
    return 0;
}
