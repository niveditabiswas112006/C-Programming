// Practical:

// 2. Write a C++ program to define a class Student with the following:
//    Private data members: name and age.
//    A parameterized constructor to initialize the name and age.
//    A copy constructor to create a copy of an existing Student object.
//    A member function display() to print the details of the student.
//    In the main() function, create an object of the Student class using the
//    parameterized constructor and another object using the copy constructor. Display
//    the details of both students.
// #include <iostream>
// #include <string>
// using namespace std;
// class Student {
// private:
//     string name;
//     int age;
// public:
//     Student(const string &name, int age) : name(name), age(age) {}
//     void display() const {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };
// int main() {   
//     Student student1("nisha", 36);
//     cout << "Details of student1:" << endl;
//     student1.display();
//     return 0;
// }