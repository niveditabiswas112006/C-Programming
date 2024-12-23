#include <iostream>
using namespace std;

class base {
    public:
    virtual void display() {
        cout << "base class" << endl;
    }
};

class derived: public base {
    public:
    void display() {
        cout << "derived class" << endl;
    }
};

int main() {
    base* ptr;
    derived obj;
    ptr = &obj;
    ptr->display();
    obj.display();
    obj.base::display();
    return 0;
}

