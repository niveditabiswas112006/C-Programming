// Practical:

// 1. Write a program that defines a class Rectangle with the following:
//    Two private data members: length and width.
//    A default constructor that initializes length and width to 1.
//    A member function area() to calculate and return the area of the rectangle.
//    A main() function to create an object of the Rectangle class, call the area()
//    function, and print the result.

// #include <iostream>
// using namespace std;
// class Rectangle
// {
// private:
//     double length;
//     double width;
// public:
//     Rectangle() : length(1), width(1) {}
//     double area() const
//     {
//         return length * width;
//     }
//     void setLength(double len)
//     {
//         if (len > 0)
//         {
//             length = len;
//         }
//         else
//         {
//             throw invalid_argument("Length must be positive.");
//         }
//     }
//     void setWidth(double wid)
//     {
//         if (wid > 0)
//         {
//             width = wid;
//         }
//         else
//         {
//             throw invalid_argument("Width must be positive.");
//         }
//     }
//     double getLength()
//     const
//     {
//         return length;
//     }
//     double getWidth()
//     const
//     {
//         return width;
//     }
// };
// int main()
// {
//     Rectangle rect;
//     cout << "The area of the rectangle is: " << rect.area() << endl;
//     return 0;
// }