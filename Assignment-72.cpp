// 72. function overiding:
// code statement:
#include <iostream>
using namespace std;

class base {
    public:
    void display() {
        cout << "Base class" << endl;
    }
};

class derived : public base {
    public:
    void display() {
        cout << "Derived class" << endl;
    }
};

int main() {
    derived obj;
    obj.display();
    obj.base::display();
    return 0;
}