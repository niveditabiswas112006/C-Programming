#include <iostream>
#include <string>
using namespace std;

template <class T>
class demo {
    public:
        T a;
        demo(T b) {
            a = b;
        }
        void display() {
            cout << a;
        }
};

int main() {
    demo<string> d("sam");
    d.display();
    return 0;
}