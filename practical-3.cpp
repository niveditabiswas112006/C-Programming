// practical:

// 3. Write a program that defines a function int add(int a, int b) to calculate and return
// the sum of two integers.
// ● Call this function from main() with two user-input values.
// ● Display the returned result.
// #include <iostream>
// using namespace std;
// int add(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     int num1, num2;
//     cout << "Enter two integers: ";
//     cin >> num1 >> num2;
//     int result = add(num1, num2);
//     cout << "The sum is: " << result << endl;
//     return 0;
// }




// 4. Write a program to demonstrate function overloading by creating three functions
// named max:
// int max(int a, int b) to find the larger of two integers.
// double max(double a, double b) to find the larger of two double values.
// #include <iostream>
// using namespace std;
// int max(int a, int b) {
//     return (a > b) ? a : b;
// }
// double max(double a, double b) {
//     return (a > b) ? a : b;
// }
// int main() {
//     int int1 = 56, int2 = 43;
//     double double1 = 56.5, double2 = 78.5;
//     cout << "Larger integer: " << max(int1, int2) << endl;
//     cout << "Larger double: " << max(double1, double2) << endl;
//     return 0;
// }




// 5. Write a recursive function int factorial(int n) that calculates the factorial of a given
// number n.
// In the main() function, prompt the user to enter a positive integer and call the
// factorial function to compute and display the result.
// Example: For input 5, the output should be 120.
// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     if (n <= 1) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main()
// {
//     int number;
//     cout << "Enter a positive integer: ";
//     cin >> number;
//     if (number < 0)
//     {
//         cout << "Please enter a positive integer!" << endl;
//     } else
//     {
//         cout << "Factorial of " << number << " is: " << factorial(number) << endl;
//     }
//     return 0;
// }




// 6. Write a C++ program to input 5 integers from the user into an array and find the
// largest number in the array
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5];
//     int largest;
//     cout << "Enter 5 integers: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     largest = arr[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     cout << "The largest number is: " << largest << endl;
//     return 0;
// }




// 7. Write a program to declare an array of size 10, initialize it with the first 10 natural
// numbers, and print each element on a new line.
// #include <iostream>
// using namespace std;
// int main()
// {
  
//     int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
//     for (int i = 0; i < 10; i++)
//     {
//         cout << array[i] << endl;
//     }
//     return 0;
// }




// 8. Write a program to reverse the elements of an array. For example, if the array is
// {1, 2, 3, 4, 5}, the reversed array should be {5, 4, 3, 2, 1}
// #include <iostream>
// using namespace std;
// int main() {


//     int array[] = {23, 34, 45, 56, 67, 78, 89};
//     int size = sizeof(array) / sizeof(array[0]);
  
//     cout << "Original array: ";
//     for (int i = 0; i < size; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;
  
//     for (int i = 0; i < size / 2; i++) {
//         int temp = array[i];
//         array[i] = array[size - 1 - i];
//         array[size - 1 - i] = temp;
//     }
  
//     cout << "Reversed array: ";
//     for (int i = 0; i < size; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }




// 9. Write a program to take 6 integers as input, store them in an array, and calculate
// the sum of all elements in the array.
// #include <iostream>
// using namespace std;
// int main() {
  
//     int array[6];
//     int sum = 0;
  
//     cout << "Enter 6 integers: ";
//     for (int i = 0; i < 6; i++) {
//         cin >> array[i];
//     }
  
//     for (int i = 0; i < 6; i++) {
//         sum += array[i];
//     }
  
//     cout << "The sum of all elements is: " << sum << endl;
//     return 0;
// }




// 10.Write a program to input 8 numbers into an array and count how many of them are
// even and how many are odd.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[8];
//     int evenCount = 0, oddCount = 0;
//     cout << "Enter 8 numbers: ";
//     for (int i = 0; i < 8; i++)
//     {
//         cin >> array[i];
//     }
//     for (int i = 0; i < 8; i++)
//     {
//         if (array[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }
//     cout << "Even numbers: " << evenCount << endl;
//     cout << "Odd numbers: " << oddCount << endl;
//     return 0;
// }




// 11. Create a program in C++ based on Strings
// a. Reverse of string
// b. Concatenate two strings
// c. String Length calculation
// #include <iostream>
// #include <string>
// using namespace std;


// int main() {
//     string str1, str2, reversedStr;


//     cout << "Enter the first string: ";
//     getline(cin, str1);


//     cout << "Enter the second string: ";
//     getline(cin, str2);


//     reversedStr = string(str1.rbegin(), str1.rend());
//     cout << "\nReversed string of the first input: " << reversedStr << endl;


//     string concatenatedStr = str1 + str2;
//     cout << "Concatenated string: " << concatenatedStr << endl;


//     cout << "Length of the first string: " << str1.length() << endl;
//     cout << "Length of the second string: " << str2.length() << endl;


//     return 0;
// }


// 13. Explain how swapping works using pointers.
// Modify above Program to find both the largest and smallest elements.
// Explain why *(ptr + i) is used to access array elements in Program 3.
// Write a program to calculate the product of two numbers using pointers.
// Add a feature to the above Program to calculate the sum of all array
// elements using pointer arithmetic.






// Template:

// 1. W.A.P template
// #include <iostream>
// using namespace std;
// template <class T>
// class demo
// {
//     public:
//     T a;
//     demo(T b)
//     {
//         a=b;
//     }
//     void display()
//     {
//         cout<<a;
//     }
// };
// int main()
// {
//     demo <string> d("Sam");
//     d.display();


//     return 0;
// }




//2.  W.A.P addition by using template.
// #include <iostream>
// #include <string>
// using namespace std;
// template <class T, class T2>
// class demo
// {
//     public:
//     T a;
//     T2 a2;
//     demo(T b, T2 b2)
//     {
//         a=b;
//         a2=b2;
//     }
//     void display()
//     {
//         cout<<a+a2;
//     }
// };
// int main()
//     {
//         demo<int,float>d(10, 20);
//         d.display();
//         return 0;
//     }




//3.  W.A.P square
// #include <iostream>
// using namespace std;
// template <class T>
// class demo
// {
// public:
//     T a;
//     demo(T b)
//     {
//         a = b;
//     }
//     void display()
//     {
//         cout << "Square of " << a << " is " << a * a << endl;
//     }
// };
// int main() {
//     demo<int> d(5);
//     d.display();
//     demo<float> f(5);
//     f.display(); 
//     return 0;
// }




//4.  W.A.P Swapping.
// #include <iostream>
// #include <string>
// using namespace std;
// template <class T>
// class demo
// {
// public:
//     T a, b, c;
//     demo(T x, T y, T z) {
//         a = x;
//         b = y;
//         c = z;
//     }
//     void swapThree()
//     {
//         T temp = a;
//         a = b;
//         b = c;
//         c = temp;
//     }
//     void display()
//     {
//         cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
//     }
// };
// int main()
// {
//     demo<string> d("kingal", "nivedita", "sneha");
//     cout << "Before swapping:" << endl;
//     d.display();
//     d.swapThree(); 
//     cout << "After swapping:" << endl;
//     d.display();
//     return 0;
// }


// Loop:

//1. W.A.P. to check whether number is prime number or not
// #include <iostream>
// using namespace std;
// int main() {
//     int num, i, flag = 0;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num <= 1) {
//         cout << num << " is not a prime number." << endl;
//         return 0;
//     }
//     for (i = 2; i < num; i++) {
//         if (num % i == 0) {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//         cout << num << " is a prime number." << endl;
//     else
//         cout << num << " is not a prime number." << endl;
//     return 0;
// }




//2. W.A.P. to check whether given number is amrstrong number or not
// #include <iostream>
// using namespace std;
// int main() {
//     int num, originalNum, remainder, sum = 0;
//     cout << "Enter a number: ";
//     cin >> num;
//     originalNum = num;
//     while (num > 0) {
//         remainder = num % 10;     
//         sum += remainder * remainder * remainder;
//         num = num / 10;         
//     }
//     if (sum == originalNum)
//         cout << originalNum << " is an Armstrong number." << endl;
//     else
//         cout << originalNum << " is not an Armstrong number." << endl;
//     return 0;
// }


// file Handling:

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main (){
//     ifstream fin ("demo.txt");
//     string string_name="nivi";
//     getline(fin,string_name);
//     cout<<string_name;
//     fin.close();
//     return 0;
// }
//2.  #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main (){
//     ifstream fin ("demo.txt");
//     string string_name="nivi";
//     while(!fin.eof())
//     {
//         getline(fin,string_name);
//         cout<<string_name;
//     }
//     fin.close();
//     return 0;
// }
//3.  #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main(){
//     ofstream fout("demo.txt");
//     string str_name="nivi";
//     fout<<str_name;
//     fout.close();
//     return 0;
// }
//4.  #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main (){
//     fstream my_file("demo3.txt",ios::app);
//     if (!my_file){
//         cout<<"failed to open the file for append";
//         return 0;
//     }
//     my_file<<"line 7"<<endl;
//     my_file<<"line 8"<<endl;
//     my_file<<"line 9"<<endl;
//     my_file.close();
//     return 0;
// }
//5.  #include <iostream>
// #include <fstream>
// using namespace std;
// int main (){
//     string str;
//     fstream my_file("demo3.txt",ios::in);
//     while(!my_file.eof())
//     {
//         getline(my_file,str);
//         cout<<str<<endl;
//     }
//     my_file.close();   
//         return 0;
// }
//6.  #include <iostream>
// #include <fstream>
// using namespace std;
// int main (){
//     fstream my_file("demo3.txt",ios::out);
//     if (!my_file){
//         cout<<"failed to open the file for append";
//         return 0;
//     }
//     my_file<<"line 4"<<endl;
//     my_file<<"line 5"<<endl;
//     my_file<<"line 6"<<endl;
//     my_file.close();
//     return 0;
// }


// 6 December Assignment:

//1. W.A.P on Destructor.


// #include <iostream>
// using namespace std;
// class demo{
//     public:
//     demo()
//     {
//         cout<<"calling constructor"<<endl;
//     }
//     ~demo()
//     {
//         cout<<"destructor is calling :delete object"<<endl;
//     }
// };
// int main(){
//     cout<<"entry scope"<<endl;
//     demo d;
//     demo d2;
//     cout<<"exit scope"<<endl;
//     return 0;
// }




// W.A.P to write "Hello World!" convert it into destructor.


// #include <iostream>
// using namespace std; 
// class demo{
//     public:
//     demo()
//     {
//         cout<<"HelloWorld!"<<endl;
//     }
//     ~demo()
//     {
//         cout<<"HelloWorld! :delete object"<<endl;
//     }
// };
// int main(){
//     cout<<"entry scope"<<endl;
//     demo d;
//     return 0;
// }




// #include<iostream>
// #include<math.h>
// #include<string.h>
// using namespace std;




// 2. Swap without using a temporary variable


// class SwapWithoutTemp {
// public:
//     SwapWithoutTemp() {
//         int x = 22, y = 55;
//         cout << "x is: " << x << endl << "y is: " << y << endl;
//         x = x + y;
//         y = x - y;
//         x = x - y;
//         cout << "After swap\nx is: " << x << "\ny is: " << y << endl;
//     }
//     ~SwapWithoutTemp(){cout<<"------------------------------------"<<endl;}
// };




// 3. Swap with using a temporary variable


// class SwapWithTemp {
// public:
//     SwapWithTemp() {
//         int x = 10, y = 3, temp;
//         cout << "x is: " << x << endl << "y is: " << y << endl;
//         temp = x;
//         x = y;
//         y = temp;
//         cout << "After swap\nx is: " << x << "\ny is: " << y << endl;
//     }
//     ~SwapWithTemp(){cout<<"------------------------------------"<<endl;}
// };




// 4. Addition


// class Addition {
// public:
//     Addition() {
//         int a = 5, b = 7, sum;
//         sum = a + b;
//         cout << "Sum is: " << sum << endl;


//     }
//     ~Addition(){cout<<"------------------------------------"<<endl;}
// };




// 5. Multiplication


// class Multiplication {
// public:
//     Multiplication() {
//         int n1 = 6, n2 = 2, mult;
//         mult = n1 * n2;
//         cout << "Product is: " << mult << endl;
//     }
//     ~Multiplication(){cout<<"------------------------------------"<<endl;}
// };




// 6. Simple Calculator


// class Calculator {
// public:
//     Calculator() {
//         float a, b;
//         char c;
//         cout << "Enter type of Calculation (+,-,*,/) : ";
//         cin >> c;
//         cout << "\nEnter The Two numbers to calculate: ";
//         cin >> a >> b;
//         switch (c) {
//             case '+': cout << a + b << endl;
//                 break;
//             case '-': cout << a - b << endl;
//                 break;
//             case '*': cout << a * b << endl;
//                 break;
//             case '/': cout << a / b << endl;
//                 break;
//             default: cout << "Operator should be valid - (+,-,*,/)\n Try Again!" << endl;
//         }
//     }
//     ~Calculator(){cout<<"------------------------------------"<<endl;}
// };




// 7. Even or Odd


// class EvenOdd {
// public:
//     EvenOdd() {
//         int num;
//         cout << "Enter a number: ";
//         cin >> num;
//         if (num % 2 == 0) {
//             cout << "The number is even" << endl;
//         } else {
//             cout << "The number is odd" << endl;
//         }
//     }
//     ~EvenOdd(){cout<<"------------------------------------"<<endl;}
// };




// 8. Temperature Conversion


// class Temperature {
// public:
//     Temperature() {
//         int f, c;
//         cout << "Enter the celsius temp: ";
//         cin >> c;
//         f = c * 1.8 + 32;
//         cout << "Fahrenheit temp is: " << f << endl;
      
//     }
//     ~Temperature(){cout<<"------------------------------------"<<endl;}
// };




// 9. Area of Circle


// class AreaOfCircle {
// public:
//     AreaOfCircle() {
//         int radi;
//         float res, pi = 3.14;
//         cout << "Enter Radius of circle: ";
//         cin >> radi;
//         res = radi * radi * pi;
//         cout << "Area of circle is : " << res << endl;
      
//     }
//     ~AreaOfCircle(){cout<<"------------------------------------"<<endl;}
// };




// 10. Reverse a number


// class ReverseNumber {
// public:
//     ReverseNumber() {
//         int a, n;
//         cout << "Enter the number to reverse: ";
//         cin >> a;
//         while (a != 0) {
//             n = a % 10;
//             a = a / 10;
//             cout << n;
//         }
//         cout << endl;
      
//     }
//     ~ReverseNumber(){cout<<"------------------------------------"<<endl;}
// };




// 11. Simple Interest


// class Interest {
// public:
//     Interest() {
//         int p, n, r, i;
//         cout << "Enter principal, number of years, and rate in percent: ";
//         cin >> p >> n >> r;
//         i = (p * n * r) / 100;
//         cout << "Simple Interest is: " << i << endl;
      
//     }
//     ~Interest(){cout<<"------------------------------------"<<endl;}
// };




// 12. Grading System


// class Grading {
// public:
//     Grading() {
//         int grade;
//         cout << "Enter your grade in 1-100 %: ";
//         cin >> grade;
//         switch (grade / 10) {
//             case 10:
//             case 9:
//                 cout << "A Grade" << endl;
//                 break;
//             case 8:
//                 cout << "B Grade" << endl;
//                 break;
//             case 7:
//                 cout << "C Grade" << endl;
//                 break;
//             case 6:
//                 cout << "D Grade" << endl;
//                 break;
//             default:
//                 cout << "F-Failed" << endl;
//         }
      
//     }
//     ~Grading(){cout<<"------------------------------------"<<endl;}
// };




// 13. Factorial


// class Factorial {
// public:
//     Factorial() {
//         long int fac;
//         cout << "Enter the number of which you need factorial: ";
//         cin >> fac;
//         for (int i = fac - 1; i >= 1; i--) {
//             fac = fac * i;
//         }
//         cout << "Factorial is: " << fac << endl;
      
//     }
//     ~Factorial(){cout<<"------------------------------------"<<endl;}
// };




// 14. Prime Number Check


// class PrimeNumber {
// public:
//     PrimeNumber() {
//         int prime, count = 0;
//         cout << "Enter the number to check: ";
//         cin >> prime;
//         for (int i = 2; i < sqrt(prime); i++) {
//             if (prime % i == 0) {
//                 count++;
//                 cout << "The number is not prime" << endl;
//                 break;
//             }
//         }
//         if (count == 0)
//             cout << "The number is prime" << endl;
      
//     }
//     ~PrimeNumber(){cout<<"------------------------------------"<<endl;}
// };




// 15. Positive, Negative or Zero


// class PlusMinus {
// public:
//     PlusMinus() {
//         int var;
//         cout << "Enter an integer: ";
//         cin >> var;
//         if (var > 0) {
//             cout << "The integer is positive" << endl;
//         } else if (var == 0) {
//             cout << "The integer is 0" << endl;
//         } else {
//             cout << "The integer is negative" << endl;
//         }
      
//     }
//     ~PlusMinus(){cout<<"------------------------------------"<<endl;}
// };




// 16. Day of the Week


// class Weekdays {
// public:
//     Weekdays() {
//         int daynum;
//         cout << "Enter the number to find the day: ";
//         cin >> daynum;
//         switch (daynum) {
//             case 1: cout << "Monday" << endl; break;
//             case 2: cout << "Tuesday" << endl; break;
//             case 3: cout << "Wednesday" << endl; break;
//             case 4: cout << "Thursday" << endl; break;
//             case 5: cout << "Friday" << endl; break;
//             case 6: cout << "Saturday" << endl; break;
//             case 7: cout << "Sunday" << endl; break;
//             default: cout << "Number should be between 1 and 7!" << endl;
//         }
      
//     }
//     ~Weekdays(){cout<<"------------------------------------"<<endl;}
// };




// 17. Armstrong Number


// class Armstrong {
// public:
//     Armstrong() {
//         int arm, temp, n, check = 0, power;
//         cout << "Enter a number to check Armstrong: ";
//         cin >> arm;
//         temp = arm;
//         string s = to_string(temp);
//         power = s.length();
//         while (temp != 0) {
//             n = temp % 10;
//             check += pow(n, power);
//             temp /= 10;
//         }
//         if (check == arm)
//             cout << "Armstrong" << endl;
//         else
//             cout << "Not Armstrong" << endl;
      
//     }
//     ~Armstrong(){cout<<"------------------------------------"<<endl;}
// };




// 18. Greatest Number


// class GreatestNumber {
// public:
//     GreatestNumber() {
//         int a, b, c;
//         cout << "Enter three numbers (A, B, C): ";
//         cin >> a >> b >> c;
//         if (a > b && a > c)
//             cout << "A is the greatest number" << endl;
//         else if (b > a && b > c)
//             cout << "B is the greatest number" << endl;
//         else
//             cout << "C is the greatest number" << endl;
      
//     }
//     ~GreatestNumber(){cout<<"------------------------------------"<<endl;}
// };




// 19. Leap Year


// class LeapYear {
// public:
//     LeapYear() {
//         int year;
//         cout << "Enter the year: ";
//         cin >> year;
//         if (year % 4 == 0)
//             cout << year << " is a leap year" << endl;
//         else
//             cout << year << " is not a leap year" << endl;
      
//     }
//     ~LeapYear(){cout<<"------------------------------------"<<endl;}
// };




// 20. Two by Two Matrix


// class TwoByTwoMatrix {
// public:
//     TwoByTwoMatrix() {
//         int a[2][2] = {{2, 35}, {3, 4}};
//         cout << a[0][0] << endl;
//         cout << a[0][1] << endl;
//         cout << a[1][0] << endl;
//         cout << a[1][1] << endl;
      
//     }
//     ~TwoByTwoMatrix(){cout<<"------------------------------------"<<endl;}
// };




// 21. Three by Three Matrix


// class ThreeByThreeMatrix {
// public:
//     ThreeByThreeMatrix() {
//         int a[3][3] = {{2, 35, 3}, {3, 4, 5}, {5, 6, 7}};
//         for (int i = 0; i < 3; i++) {
//             for (int j = 0; j < 3; j++) {
//                 cout << a[i][j] << " ";
//             }
//             cout << endl;
//         }
      
//     }
//     ~ThreeByThreeMatrix(){cout<<"------------------------------------"<<endl;}
// };


// 22. Six by Six Matrix


// class SixBySixMatrix {
// public:
//     SixBySixMatrix() {
//         int matrix[6][6];
//         for (int i = 0; i < 36; i++) {
//             int row = i / 6;
//             int col = i % 6;
//             matrix[row][col] = i + 1;
//             cout << matrix[row][col] << "\t";
//             if (col == 5) cout << endl;
//         }
      
//     }
//     ~SixBySixMatrix(){cout<<"------------------------------------"<<endl;}
// };




// 23. One Dimensional Array


// class OneDimensionalArray {
// public:
//     OneDimensionalArray() {
//         int onedi[5] = {1, 2, 3, 4, 5};
//         for (int i = 0; i < 5; i++) {
//             cout << onedi[i] << endl;
//         }
      
//     }
//     ~OneDimensionalArray(){cout<<"------------------------------------"<<endl;}
// };




// 24. Star Pyramid


// class StarPyramid {
// public:
//     StarPyramid(int rows) {
//         for (int i = 1; i <= rows; i++) {
//             for (int j = 1; j <= rows - i; j++) {
//                 cout << " ";
//             }
//             for (int j = 1; j <= (2 * i - 1); j++) {
//                 cout << "*";
//             }
//             cout << endl;
//         }
      
//     }
//     ~StarPyramid(){cout<<"------------------------------------"<<endl;}
// };




// 25. Perimeter of Rectangle


// class PerimeterRectangle {
// public:
//     PerimeterRectangle() {
//         int s1, s2, p;
//         cout << "Enter sides of rectangle: ";
//         cin >> s1 >> s2;
//         p = 2 * (s1 + s2);
//         cout << "Perimeter of rectangle is: " << p << endl;
      
//     }
//     ~PerimeterRectangle(){cout<<"------------------------------------"<<endl;}
// };




// 26. Show Number


// class ShowNumber {
// public:
//     ShowNumber() {
//         int x;
//         cout << "Enter a number: ";
//         cin >> x;
//         cout << "Your number is: " << x << endl;
      
//     }
//     ~ShowNumber(){cout<<"------------------------------------"<<endl;}
// };




// 27. String Operations


// class StringOperations {
// public:
//     StringOperations() {
//         string str = "Be yourself.";
//         cout << "Original string: " << str << endl;
//         str.append(" - Oscar Wilde");
//         cout << "After append: " << str << endl;
//         str.replace(0, 2, "Always");
//         cout << "After replace: " << str << endl;
//         cout << "Length of string: " << str.length() << endl;
//         cout << "Substring (0-5): " << str.substr(0, 5) << endl;
//         cout << "Finding 'yourself': " << str.find("yourself") << endl;
      
//     }
//     ~StringOperations(){cout<<"------------------------------------"<<endl;}
// };




// 28. String Operations with C-Strings


// class CStringOperations {
// public:
//     CStringOperations() {
//         char str1[50] = "Hello, ";
//         char str2[50] = "World!";
//         char str3[50];
//         printf("Length of str1: %lu\n", strlen(str1));
//         strcpy(str3, str1);
//         printf("After copying, str3: %s\n", str3);
//         strcat(str1, str2);
//         printf("After concatenation, str1: %s\n", str1);
//         int result = strcmp(str1, str3);
//         if (result == 0) {
//             printf("str1 and str3 are equal.\n");
//         } else {
//             printf("str1 and str3 are not equal.\n");
//         }
      
//     }
//     ~CStringOperations(){cout<<"------------------------------------"<<endl;}
// };




// 29. Sum of Digits


// class SumOfDigits {
// public:
//     SumOfDigits() {
//         int num, sum = 0, n;
//         cout << "Enter the number to add its digits: ";
//         cin >> num;
//         while (num != 0) {
//             n = num % 10;
//             sum += n;
//             num /= 10;
//         }
//         cout << sum << endl;
      
//     }
//     ~SumOfDigits(){cout<<"------------------------------------"<<endl;}
// };


// int main(){
//     int num1 = 5;
//     int num2 = 10;


//     int sum = num1 + num2;


//     cout << " The num of " << num1 << " and " << num2 << " is: " <<endl;
//     return 0;
// }


// Exception Handling:

//1.  #include <iostream>
// using namespace std;
// int main()
// {
//     try
//     {
//         int a;
//         int b;


//         if (b==0)
//         {
//             throw 404;
//         }
//         int c=a/b;
//         cout<<c;
//     }
//     catch(int num)
//     {
//     cout<<"can not didvide by 0"<<endl;
//     cout<<"error found"<<num;
//     }


//     return 0;
// }




//2.  #include <iostream>
// using namespace std;
// int main ()
// {
//    try
//    {
//     int a;
//     int b;
//     cout<<"enter value of a"<<endl;
//     cin>>a;
//     cout<<"enter value of b"<<endl;
//     cin>>b;
//     if (b==0)
//     {
//         throw 404;
//     }
//     int c=a/b;
//     cout<<c;
//    }
//    catch(int num)
//    {
//     cout<<"can not divide by 0"<<endl;
//     cout<<"error found"<<num;
//    }
//    return 0;
// }




//3.  W.A.P on catch all the type of exception.
// #include <iostream>
// using namespace std;
// int main ()
// {
//    try
//    {
//     int a;
//     int b;
//     cout<<"enter value of a"<<endl;
//     cin>>a;
//     cout<<"enter value of b"<<endl;
//     cin>>b;
//     if (b==0)
//     {
//         throw 404;
//     }
//     int c=a/b;
//     cout<<c;
//    }
//    catch(...)
//    {
//     cout<<"can not divide by 0"<<endl;
//     cout<<"error found";
//    }
//    return 0;
// }


// ExceptionHandling 12 October:

// 1. W.A.P on Factorial by using try, catch block.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     try
//     {
//         cout << "Enter a positive integer: ";
//         cin >> n;
//         if (cin.fail() || n < 0)
//         {
//             throw "Invalid input! Please enter a positive integer.";
//         }
//         int fact = 1;
//         for (int i = 1; i <= n; i++)
//         {
//             fact = fact * i;
//         }
//         cout << "Factorial of " << n << " is " << fact << endl;
//     }
//     catch (const char* message)
//     {
//         cout << message << endl;
//     }
//     return 0;
// }




//2.  W.A.P on even and odd by using try and catch block.
// #include <iostream>
// using namespace std;
// int main() {
//     int number;
//     try
//     {
//         cout << "Enter a number: ";
//         cin >> number;
//         if (cin.fail())
//         {
//             throw "Invalid input! Please enter an integer.";
//         }
//         if (number % 2 == 0)
//         {
//             throw "The number is even.";
//         }
//         else
//         {
//             throw "The number is odd.";
//         }
//     }
//     catch (const char* message)
//     {
//         cout << message << endl;
//     }
//     return 0;
// }




// 3. W.A.P on positive & negative by using try and catch block.
// #include <iostream>
// using namespace std;
// int main() {
//     float number;
//     try
//     {
//         cout << "Enter a number: ";
//         cin >> number;
//         if (cin.fail())
//         {
//             throw "Invalid input! Please enter a numeric value.";
//         }
//         if (number > 0)
//         {
//             throw "The number is positive.";
//         }
//         else
//         {
//             throw "The number is negative.";
//         }
//     } catch (const char* message) {
//         cout << message << endl;
//     }
//     return 0;
// }




// 4. W.A.P on palindrome by using try and catch block.
// #include <iostream>
// #include <string>
// using namespace std;


// int main()
// {
//     string input;
//     try
//     {
//         cout << "Enter a string: ";
//         getline(cin, input);
//         if (input.empty()) throw "Input cannot be empty!";
      
//         int start = 0, end = input.length() - 1;
      
//         while (start < end) {
//             if (input[start] != input[end]) throw "Not a palindrome!";
//             start++;
//             end--;
//         }
      
//         cout << "The string is a palindrome!" << endl;
//     }
//     catch (const char* msg) {
//         cout << "Error: " << msg << endl;
//     }
//     return 0;
// }




// 5. W.A.P on swapping by using try, catch block.
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;


//     try {
//         cout << "Enter three integers: ";
//         cin >> a >> b >> c;
//         if (cin.fail()) {
//             throw "Invalid input! Please enter integers.";
//         }
//         a = a + b + c;
//         b = a - (b + c);
//         c = a - (b + c);
//         a = a - (b + c);
//         cout << "Swapped values: a = " << a << ", b = " << b << ", c = " << c << endl;
//     }
//     catch (const char* msg) {
//         cout << "Error: " << msg << endl;
//     }


//     return 0;
// }




// Functional Overloading:

// #include <iostream>
// using namespace std;
// class demo
// {
//     public:
//     void addition (int a, int b)
//     {
//         int c=a+b;
//         cout<<"addition is" <<c <<endl;
//     }
//     void addition (int a, int b, int c)
//     {
//         int z=a+b+c;
//         cout<<"addition is"<<z;
//     }
// };
// int main()
// {
//     demo d;
//     d.addition(10, 20);
//     d.addition(10, 20, 30);
// }

// Inline function:

// #include <iostream>
// using namespace std;
//     inline void displayNum(int num)
//     {
//         cout<<num<<endl;
//     }
//     int main()
//     {
//         displayNum(5);
//         displayNum(8);
//         displayNum(666);
//     }


// 7 Practical:

// 7. Write a program to declare an array of size 10, initialize it with the first 10 natural
// numbers, and print each element on a new line.
// #include <iostream>
// using namespace std;
// int main()
// {
  
//     int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
//     for (int i = 0; i < 10; i++)
//     {
//         cout << array[i] << endl;
//     }
//     return 0;
// }


// 8 Practical:

// 8. Write a program to reverse the elements of an array. For example, if the array is
// {1, 2, 3, 4, 5}, the reversed array should be {5, 4, 3, 2, 1}
// #include <iostream>
// using namespace std;
// int main() {


//     int array[] = {23, 34, 45, 56, 67, 78, 89};
//     int size = sizeof(array) / sizeof(array[0]);
  
//     cout << "Original array: ";
//     for (int i = 0; i < size; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;
  
//     for (int i = 0; i < size / 2; i++) {
//         int temp = array[i];
//         array[i] = array[size - 1 - i];
//         array[size - 1 - i] = temp;
//     }
  
//     cout << "Reversed array: ";
//     for (int i = 0; i < size; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }



// 9 Practical:

// 9. Write a program to take 6 integers as input, store them in an array, and calculate
// the sum of all elements in the array.
// #include <iostream>
// using namespace std;
// int main() {
  
//     int array[6];
//     int sum = 0;
  
//     cout << "Enter 6 integers: ";
//     for (int i = 0; i < 6; i++) {
//         cin >> array[i];
//     }
  
//     for (int i = 0; i < 6; i++) {
//         sum += array[i];
//     }
  
//     cout << "The sum of all elements is: " << sum << endl;
//     return 0;
// }



// 9 december:

//1.  W.A.P of Public
// #include <iostream>
// using namespace std;
// class demo1
// {
//     public:
//     int a;
//     void getdata()
//     {
//         cout<<"Enter the number";
//         cin>>a;
//     }
// };
// class demo2: public demo1
// {
//     public:
//     void display()
//     {
//         getdata();
//         cout<<"Value of a " <<a;
//     }
// };
// int main()
// {
//     demo2 d;
//     d.display();
//     return 0;
// }




//2.  W.A.P of Protected
// #include <iostream>
// using namespace std;
// class demo1
// {
//     protected:
//     int a;
//     void getdata()
//     {
//         cout<<"Enter the number";
//         cin>>a;
//     }
// };
// class demo2: public demo1
// {
//     public:
//     void display()
//     {
//         getdata();
//         cout<<"Value of a " <<a;
//     }
// };
// int main()
// {
//     demo2 d;
//     d.display();
//     return 0;
// }




//3.  W.A.P of squaring
// #include <iostream>
// using namespace std;
// class demo1
// {
//     public:
//     int a;
//     void getdata()
//     {
//         cout<<"Enter the value of a";
//         cin>>a;
//     }
// };
// class demo2: public demo1
// {
//     public:
//     void getsqr()
//     {
//         a=a*a;
//     }
// };
// class demo3: public demo2
// {
//     public:
//     void display()
//     {
//         cout<<"square of a is "<<a;
//     }
// };
// int main()
// {
//     demo3 d;
//     d.getdata();
//     d.getsqr();
//     d.display();
//     return 0;
// }




//4.  W.A.P Addition of 2 variable
// #include <iostream>
// using namespace std;
// class demo1
// {
//     public:
//     int a;
//     void getdata()
//     {
//         cout<<"Enter the value of a";
//         cin>>a;
//     }
// };
// class demo2: public demo1
// {
//     public:
//     int b;
//     void getdata1()
//     {
//         cout<<"Enter the value of b";
//         cin>>b;
//     }
// };
// class demo3: public demo2
// {
//     public:
//     int c;
//     void getsum()
//     {
//         c=a+b;
//     }
// };
// class demo4: public demo3
// {
//     public:
//     void display()
//     {
//         cout<<"sum "<<c;
//     }
// };
// int main()
// {
//     demo4 d;
//     d.getdata();
//     d.getdata1();
//     d.getsum();
//     d.display();
//     return 0;
// }




//5.  W.A.P of Multiple Inheritance.
// #include <iostream>
// using namespace std;
// class base1
// {
//     public:
//     int a;
//     void getdata1()
//     {
//         cout<<"Enter the first number";
//         cin>>a;
//         cout<<"Value of a "<<a <<endl;
//     }
// };
// class base2
// {
//     public:
//     int b;
//     void getdata2()
//     {
//         cout<<"Enter the second number";
//         cin>>b;
//         cout<<"Value of b"<<b <<endl;
//     }
// };
// class derived: public base1, public base2
// {
//     public:
//     int c;
//     void adddisplay()
//     {
//         c=a+b;
//         cout<<"addition of a and b "<<c;
//     }
// };
// int main()
// {
//     derived d;
//     d.getdata1();
//     d.getdata2();
//     d.adddisplay();
//     return 0;
// }




//6.  W.A.P of Heirarchical Inheritance.
// #include <iostream>
// using namespace std;
// class base1
// {
//     public:
//     int a;
//     void getdata1()
//     {
//         cout<<"Enter the first number ";
//         cin>>a;
//         cout<<"Value of a "<<a <<endl;
//     }
// };
// class base2: public base1
// {
//     public:
//     int b;
//     void getdata2()
//     {
//         cout<<"Enter the second number";
//         cin>>b;
//         cout<<"Value of b "<<b <<endl;
//     }
// };
// class Hbase: public base1
// {
// };
// int main()
// {
//     base2 b;
//     Hbase h;
//     b.getdata1();
//     b.getdata2();
//     h.getdata1();
//     return 0;
// }




//7.  W.A.P of Bank Working System
// #include <iostream>
// using namespace std;
// class bankaccount1
// {
//     public:
//     int accountnumber;
//     void getdata1()
//     {
//         cout<<"Enter the bank account number :";
//         cin>>accountnumber;
//         cout<<"bank account number is :"<<accountnumber<<endl;
//     }
// };
// class bankaccount2
// {
//     public:
//     int name;
//     void getdata()
//     {
//         cout<<"Enter your bank account name :";
//         cin>>name;
//         cout<<"back account name is :"<<name<<endl;
//     }
// };
// class derived: public bankaccount1, public bankaccount2
// {
//     public:
//     int credit;
//     void creditdisplay()
//     {
//         if (count > 0)
//         {
//             balance += amount;
//             cout<<"credited rupees" <<count <<endl;
//         }
//         else
//         {
//             cout<<" Invalid credited amount is :" <<endl;
//         }
//     }
//     public:
//     int debit;
//     void debitdisplay()
//     {
//         if (count > 0 && count <= balance)
//         {
//             balance -= count;
//             cout<<"debit rupees" <<count <<endl;
//         }
//         else
//         {
//             cout<<" Invalid debit amount is :" <<endl;
//         }
//     }
// };
// int main()
// {
//     derived d;
//     d.getdata1();
//     d.getdata2();
//     d.creditdisplay();
//     d.debitdisplay();
//     return 0;
// }




// 10 December:

// #include <iostream>
// #include <string>
// using namespace std;
// class BankAccount
// {
//     private:
//     string accountHolderName;
//     int accountNumber;
//     double balance;
//     public:
//     Bank Account (string name, int number, double initialBalance)
//     {
//         accountHolderName=name;
//         accountNumber=number;
//         balance=initialBalance;
//     }
//     void credit (double amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//             cout<<"Amount credited:"<<amount <<".New balance:"<<balance<<endl;
//         }
//         else
//         {
//             cout<<"Invalid amount.Please enter a positive value.\n";
//         }
//     }
//     void debit (double amount)
//     {
//         if (amount > 0 && amount <= balance)
//         {
//             balance -= amount;
//             cout<<"Amount debited:"<<amount<<".New balance:"<<balance<<endl;
//         }
//         else
//         {
//             cout<<"Insufficient funds or Invalid Amount.\n";
//         }
//     }
//     void displayAccountDetail() const {
//         cout<<"Account Holder:"<<accountHolderName
//         cout<<"\n Account Number:"<<accountNumber
//         cout<<"\n Current Balance:"<<balance<<endl;
//     }
// };
// int main ()
// {
//     Bank Account myAccount ("John, 123456, 500.0");
//     cout<<"Initial account details:\n";
//     myAccount.displayAccountDetails()
//     cout<<"\n Performing operations:\n";
//     myAccount.credit (200.0);
//     myAccount.debit (100.0);
//     myAccount.debit (700.0);
//     cout<<"\n Final account details: \n";
//     myAccount.displayAccountDetail (); 
//     return 0;
// }


// 10 Practical:

// 10.Write a program to input 8 numbers into an array and count how many of them are
// even and how many are odd.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[8];
//     int evenCount = 0, oddCount = 0;
//     cout << "Enter 8 numbers: ";
//     for (int i = 0; i < 8; i++)
//     {
//         cin >> array[i];
//     }
//     for (int i = 0; i < 8; i++)
//     {
//         if (array[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }
//     cout << "Even numbers: " << evenCount << endl;
//     cout << "Odd numbers: " << oddCount << endl;
//     return 0;
// }


// 13 Practical:

// 13. Explain how swapping works using pointers.


// Modify above Program to find both the largest and smallest elements.
// Explain why *(ptr + i) is used to access array elements in Program 3.
// Write a program to calculate the product of two numbers using pointers.
// Add a feature to the above Program to calculate the sum of all array
// elements using pointer arithmetic.
// #include <iostream>
// using namespace std;
// void swap(int* a, int* b) {
//     int temp = *a; 
//     *a = *b;       
//     *b = temp;     
// }


// void calculateProduct(int* a, int* b, int* product) {
//     *product = (*a) * (*b); 
// }


// void findLargestAndSmallest(int* arr, int size, int* largest, int* smallest) {
//     *largest = *arr;  
//     *smallest = *arr; 


//     for (int i = 1; i < size; i++) {
//         if (*(arr + i) > *largest) { 
//             *largest = *(arr + i);
//         }
//         if (*(arr + i) < *smallest) { 
//             *smallest = *(arr + i);
//         }
//     }
// }


// void calculateSum(int* arr, int size, int* sum) {
//     *sum = 0;
//     for (int i = 0; i < size; i++) {
//         *sum += *(arr + i); 
//     }
// }


// int main() {
//     int num1, num2, product;
//     int arr[5] = {3, 7, 2, 9, 5}; 
//     int largest, smallest, sum;


//     num1 = 10, num2 = 20;
//     cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
//     swap(&num1, &num2);
//     cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;


//     calculateProduct(&num1, &num2, &product);
//     cout << "\nProduct of " << num1 << " and " << num2 << " is: " << product << endl;


//     findLargestAndSmallest(arr, 5, &largest, &smallest);
//     cout << "\nLargest element in the array: " << largest << endl;
//     cout << "Smallest element in the array: " << smallest << endl;


//     calculateSum(arr, 5, &sum);
//     cout << "Sum of all elements in the array: " << sum << endl;


//     return 0;
// }


// 19-1:

// #include <iostream>
// using namespace std;
// class say {
// public:
//     void sayHello() {
//         cout << "HelloWorld!" << endl;
//     }
// };
// int main() {
//     say greeter;
//     greeter.sayHello();
//     return 0;
// }
 
// 19-2:

// #include <iostream>
// using namespace std;
// class SwapNumbers {
// private:
//     int num1, num2;
// public:
//     SwapNumbers(int a, int b) : num1(a), num2(b) {}
//     void swap() {
//         int temp = num1;
//         num1 = num2;
//         num2 = temp;
//     }
//     void display() const {
//         cout << "First number: " << num1 << endl;
//         cout << "Second number: " << num2 << endl;
//     }
// };
// int main() {
//     int a, b;
//     cout << "Enter the first number: ";
//     cin >> a;
//     cout << "Enter the second number: ";
//     cin >> b;
//     SwapNumbers swapObj(a, b);
//     cout << "Before swapping: " << endl;
//     swapObj.display();
//     swapObj.swap();
//     cout << "After swapping: " << endl;
//     swapObj.display();
//     return 0;
// }


// 19-3:

// #include <iostream>
// using namespace std;
// class Swapper {
// private:
//     int num1, num2;
// public:
//     Swapper(int a, int b) : num1(a), num2(b) {}
//     void swap() {
//         num1 = num1 + num2;  // Step 1: num1 = num1 + num2
//         num2 = num1 - num2;  // Step 2: num2 = num1 - num2 (which is original num1)
//         num1 = num1 - num2;  // Step 3: num1 = num1 - num2 (which is original num2)
//     }
//     void display() const {
//         cout << "First number: " << num1 << endl;
//         cout << "Second number: " << num2 << endl;
//     }
// };
// int main() {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;
//     Swapper swapObj(x, y);
//     cout << "Before swapping:" << endl;
//     swapObj.display();
//     swapObj.swap();
//     cout << "After swapping:" << endl;
//     swapObj.display();
//     return 0;
// }


// 19-4:

// #include <iostream>
// using namespace std;
// class Calculator {
// private:
//     int num1, num2;
// public:
//     Calculator(int x, int y) : num1(x), num2(y) {}
//     void Addition() {
//         int sum = num1 + num2;
//         cout << "The addition of " << num1 << " and " << num2 << " is: " << sum << endl;
//     }
// };
// int main() {
//     int x = 10;
//     int y = 5;
//     Calculator calc(x, y);  
//     calc.Addition();
//     return 0;
// }



// 19-5:

// #include <iostream>
// using namespace std;
// class Calculator {
// private:
//     int num1, num2;
// public:
//     Calculator(int x, int y) : num1(x), num2(y) {}
//     int multiplication() {
//         int multiplication = num1 * num2;
//         cout << "The multiplication of " << num1 << " and " << num2 << " is: " << multiplication << endl;
//     }
// };
// int main() {
//     int x = 10;
//     int y = 5;
//     Calculator calc(x, y);  
//     calc.multiplication();
//     return 0;
// }


// Area:

// #include<iostream>
// using namespace std;
// class circle{
//     public:
//     int rad;
//     void areacirc(){
//         cout<<"Area of circle is : "<<rad*rad*(3.14)<<endl;
//     }
//     void pericirc(){
//         cout<<"perimeter of circle is : "<<rad*(3.14)*2<<endl;
//     }
// };
// class rect{
//     public:
//     int l,b;
//     void arearect(){
//         cout<<"Area of rectangle is : "<<l*b<<endl;
//     }
//     void perirect(){
//         cout<<"Area of rectangle is : "<<l*b<<endl;
//     }
// };
// class squ{
//     public:
//     int side;
//     void areasqu(){
//         cout<<"Area of square is : "<<side*side<<endl;
//     }
//     void perisqu(){
//         cout<<"Area of square is : "<<4*side<<endl;
//     }
// };
// class display: public circle,public squ,public rect{
//     public:
//     void getcirc(){
//         cout<<"\nEnter radius : ";
//         cin>>rad;
//     }
//     void getsqu(){
//         cout<<"\nEnter side of square : ";
//         cin>>side;
//     }
//     void getrect(){
//         cout<<"\nEnter length and breadth of rectangle : ";
//         cin>>l>>b;
//     }
// };
// int main(){
//     display d;
//     //Get inputs
//     d.getcirc();
//     d.getsqu();
//     d.getrect();
//     //Circle
//     d.areacirc();
//     d.pericirc();
//     //Square
//     d.areasqu();
//     d.perisqu();
//     //Rectangle
//     d.arearect();
//     d.perirect();
//     return 0;
// }


//2 type.  #include <iostream>
// using namespace std;
// class square
// {
//     public:
//     int side;
//     void sqr(){
//         cout<<"Enter the side of the square: ";
//         cin>>side;
//     }
// };
// class rectangle
// {
//     public:
//     int length;
//     int breadth;
//     void rect(){
//         cout<<"Enter the length of the rectangle: ";
//         cin>>length;
//         cout<<"Enter the breadth of the rectangl: ";
//         cin>>breadth;
//     }
// };
// class circle
// {
//     public:
//     int radius;
//     void crcl(){
//         cout<<"Enter the radius of the circle: ";
//         cin>> radius;
//     }
// };
// class Area: public square,public rectangle,public circle
// {
//     public:
//     double area;
//     void areaofsqr(){
//         sqr();
//         area=side*side;
//         cout<<"The area of square of side "<<side<<" is: "<<area;
//     }
//     void areaofrect(){
//         rect();
//         area=length*breadth;
//         cout<<"The area of rectangle of length: "<<length<<" and breadth: "<<breadth<<" is: "<<area;
//     }
//     void areaofcrcl(){
//         crcl();
//         area=3.14*radius*radius;
//         cout<<"The area of circle of radius: "<<radius<<" is: "<<area;
//     }
// };
// int main(){
//     int choice;
//     Area ar;
//     do
//     {
//         cout << "\nArea Calculator:\n";
//         cout << "1. Sqaure.\n";
//         cout << "2. Rectangle.\n";
//         cout << "3. Circle.\n";
//         cout << "4. Exit.\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//             ar.areaofsqr();
//             break;
//         case 2:
//             ar.areaofrect();
//             break;
//         case 3:
//             ar.areaofcrcl();
//             break;
//         case 4:
//             cout << "Thank you! Come Again" << endl;
//             break;
//         default:
//             cout << "Invalid choice. Please try again." << endl;
//         }
//     } while (choice != 4);
// }


// Array:

// W.A.P. for String using atleast 5 operations of string class.
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str1 = "Hello";
//     string str2 = "World";
//     // 1. Concatenation
//     string str3 = str1 + " " + str2;
//     cout << "Concatenated String: " << str3 << endl;
//     // 2. Length
//     cout << "Length of str1: " << str1.length() << endl;
//     // 3. Substring
//     cout << "Substring of str3: " << str3.substr(6, 5) << endl;
//     // 4. Find
//     cout << "Position of 'World': " << str3.find("World") << endl;
//     // 5. Replace
//     str3.replace(0, 5, "Hi");
//     cout << "Replaced String: " << str3 << endl;
//     return 0;
// }




// W.A.P. for to display Array of 6 by 6 matrix
// #include <iostream>
// using namespace std;
// int main() {
//     int matrix[6][6];
//     int value = 1;
//     for (int i = 0; i < 6; i++) {
//         for (int j = 0; j < 6; j++) {
//             matrix[i][j] = value++;
//         }
//     }
//     cout << "6x6 Matrix:" << endl;
//     for (int i = 0; i < 6; i++) {
//         for (int j = 0; j < 6; j++) {
//             cout << matrix[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Assignment-2:

//1.  #include <iostream>
// using namespace std;
// int main()
// {
//     int x[10]={1,2,3,4,5};
//     x[5]=20;
//     for (int i=0; i<10; i++)
//     {
//         cout<<x[i];
//     }
//     return 0;
// }




//2.  #include <iostream>
// using namespace std;
// // function prototype and function declaration
// void display(int a);
// int main()
// {
//     int x;
//     cout<<"Enter the value of x";
//     cin>>x;
//     // int x=10; //variable //actual parameter
//     display(x);//calling function + passing function
//     return 0;
// }
// //defination
// void display(int a)//formal parameter
// {
//     cout<<"value of a"<<a;
// }






//3.  #include <iostream>
// using namespace std;
// int display();
// int main(){
//     string str;
//     cout<<"Enter a string:";
//     cin>>x;
//     int x = nivi;
//     display (x);
//     getline (cin,str);
//     return 0;
// }




//4.  #include <iostream>
// using namespace std;
// void callbyvalue(int a){
//     int a = a + 10;
//     cout<<"Value of a"<<endl;
// }
// void callbyreference(int & a){
//     int a = a + 10;
//     cout<<"value of a"<<endl;
// }
// int main(){
//     int x = 10;
// }


// Assignment-3:

//1.  W.A.P to print "Hello World" by using user defined function
// #include <iostream>
// using namespace std;
// void printHelloWorld() {
//     cout << "Hello World!" << endl;
// }
// int main() {
//     printHelloWorld();
//     return 0;          
// }




//2.  W.A.P to swapping using 3rd variable by using user defined function.
// #include <iostream>
// using namespace std; 
// void swap(int &a, int &b) {
//     int temp;         
//     temp = a;         
//     a = b;            
//     b = temp;        
// }
// int main() {
//     int num1, num2;
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;
//     cout << "Before swapping: " << endl;
//     cout << "First number: " << num1 << endl;
//     cout << "Second number: " << num2 << endl;
//     swap(num1, num2);
//     cout << "After swapping: " << endl;
//     cout << "First number: " << num1 << endl;
//     cout << "Second number: " << num2 << endl;
//     return 0;
// }




//3.  W.A.P to swapping using without 3rd variable by using user defined function.
// #include <stdio.h>
// void swap(int *a, int *b) {
//     *a = *a + *b; // Step 1: a = a + b
//     *b = *a - *b; // Step 2: b = a - b (which is original a)
//     *a = *a - *b; // Step 3: a = a - b (which is original b)
// }
// int main() {
//     int x, y;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);
//     printf("Before swapping: x = %d, y = %d\n", x, y);
//     swap(&x, &y);
//     printf("After swapping: x = %d, y = %d\n", x, y);
//     return 0;
// }




//4.  W.A.P to calculate Addition of two number by using user defined function
// #include <iostream>
// using namespace std;
// void Addition(int x, int y){
//     int addition = x + y;
//     cout << "The addition of " << x << " and " << y << " is: " << addition <<endl;
// }
// int main(){
//     int x = 10;
//     int y = 5;
//     Addition(x, y);
//     return 0;
// }




//5.  W.A.P to calculate multiple of two number by using user defined function.
// #include <iostream>
// using namespace std;
// void Multiplication(int x, int y){
//     int Multiplication = x * y;
//     cout << "The Multiplication of " << x << " and " << y << " is: " << Multiplication <<endl;
// }
// int main(){
//     int x = 10;
//     int y = 5;
//     Multiplication(x, y);
//     return 0;
// }




//6.  W.A.P by using Pointer
// #include <iostream>
// using namespace std;
// void swapWithPointers(int* a, int* b) {
//     int temp = *a;
//     *a = *b;      
//     *b = temp;
// int main(){
//     int x = 10, y = 5;
//     cout << "Before swapping: x = " << x << ", y = " << y << endl;
//     swapWithPointers(&x, &y);
//     cout << "After swapping: x = " << x << ", y = " << y << endl;
//     return 0;
// }
// }




//7.  W.A.P by using Reference
// #include <iostream>
// using namespace std;
// int swapWithoutThirdVariable(int &a, int &b) {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
// int main() {
//     int x = 3, y = 6;
//     cout << "Before swapping: x = " << x << ", y = " << y << endl;
//     swapWithoutThirdVariable(x, y);
//     cout << "After swapping: x = " << x << ", y = " << y << endl;
//     return 0;
// }




//8.  W.A.P of Class and Object.
// #include <iostream>
// using namespace std;
// class demo
// {
//     public:
//     int x=10;
//     void display()
//     {
//         cout<<"Value of a"<<x;
//     }
// };
// int main()
// {
//     demo d;
//     d.display();
//     return 0;
// }




//9.  W.A.P constructor and destructor
// #include <iostream>
// using namespace std;
// class wall{
//     private:
//     int a;
//     public:
//     wall()
//     {
//         cout<<"creating a wall.please enter value for a"<<endl;
//         cin>>a;
//         cout<<"a="<<a<<endl;
//     }
// };
// int main (){
//     wall wall1;
//     return 0;
// }




//10.  #include <iostream>
// using namespace std;
// class demo{
//     public:
//     demo()
//     {
//         cout<<"calling constructor"<<endl;
//     }
//     ~demo()
//     {
//         cout<<"destructor is calling :delete object"<<endl;
//     }
// };
// int main(){
//     cout<<"entry scope"<<endl;
//     demo;
//     demo2;
//     cout<<"exit scope"<<endl;
//     return 0;
// }


// Assignment-4

//1.  W.A.P Add Two by Two Matrix (2X2)
// W.A.P by using void function.
// #include <iostream>
// using namespace std;
// void addMatrices(int A[2][2], int B[2][2], int result[2][2], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[i][j] = A[i][j] + B[i][j];
//         }
//     }
// }
// void displayMatrix(int matrix[2][2], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int A[2][2], B[2][2], result[2][2];
//     int rows = 2, cols = 2;
//     cout << "Enter elements for matrix A (2x2):" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> A[i][j];
//         }
//     }
//     cout << "Enter elements for matrix B (2x2):" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> B[i][j];
//         }
//     }
//     addMatrices(A, B, result, rows, cols);
//     cout << "\nThe result of adding matrices A and B is:" << endl;
//     displayMatrix(result, rows, cols);
//     return 0;
// }




//2.  W.A.P by using int function
// #include <iostream>
// using namespace std;
// int addMatrices(int A[2][2], int B[2][2], int result[2][2], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[i][j] = A[i][j] + B[i][j];
//         }
//     }
// }
// int displayMatrix(int matrix[2][2], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int A[2][2], B[2][2], result[2][2];
//     int rows = 2, cols = 2;
//     cout << "Enter elements for matrix A (2x2):" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> A[i][j];
//         }
//     }
//     cout << "Enter elements for matrix B (2x2):" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> B[i][j];
//         }
//     }
//     addMatrices(A, B, result, rows, cols);
//     cout << "\nThe result of adding matrices A and B is:" << endl;
//     displayMatrix(result, rows, cols);
//     return 0;
// }




//3. W.A.P Implement a program for string manipulation (reverse)
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str, reversedstr;
//     cout<<"Enter a string:";
//     getline(cin, str);
//     for(int i = str.length () - 1; i >= 0; i--){
//         reversedstr += str[i];
//     }
//     cout<<"Reversed string: " <<reversedstr <<endl;
//     return 0;
// }




// 4. W.A.P # New and Delete Operator.
// #include <iostream>
// using namespace std;
// int main(){
//     int *arr=new int[3];
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;
//     cout<<"Value of array arr [0] is"<<arr[0] <<endl;
//     cout<<"Value of array arr [1] is"<<arr[1] <<endl;
//     cout<<"Value of array arr [2] is"<<arr[2] <<endl;
//     delete[] arr;
//     cout<<"Value of array arr [0] is"<<arr[0] <<endl;
//     cout<<"Value of array arr [1] is"<<arr[1] <<endl;
//     cout<<"Value of array arr [2] is"<<arr[2] <<endl;
//     return 0;
// }




// 5. W.A.P #include <iostream>
// using namespace std;
// class say {
// public:
//     void sayHello() {
//         cout << "HelloWorld!" << endl;
//     }
// };
// int main() {
//     say greeter;
//     greeter.sayHello();
//     return 0;
// }


// Assignment-5

//1.  #include <iostream>
// using namespace std;
// int main(){
//     int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//     for( int i = 0; i<20; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }




//2.  #include <iostream>
// using namespace std;
// int main(){
//     int test[i][j][k]={{1,1},{2,2},{3,3}};
//     for( int i = 0; i<2; i++)
//     {
//         for (int j=0; j<2; j++)
//         {
//             cout<<"Enter an marks:";
//             cin>>test[i][j][k];
//         }
//     }
// for (int i = 0; i<2; i++)
//     {
//         for (int j=0; j<2; j++)
//         {
//             cout<<" "<<test[i][j][k];
//         }
//         cout<<endl;
//     }
// for (int i = 0; i<2; i++)
//     {
//         for (int k=0; k<2; k++)
//         {
//             cout<<" "<<test[i][j][k];
//         }
//         cout<<endl;
//     }  
//     return 0;
// }




//3.  #include <iostream>
// #include <string>
// int main ()
// {
//     // initialization
//     std::string str1="Hello world!";
//     std::string str2="C++ programming";
//     std::string str3=
//     // length
//     std::cout <<"Lenght of str1:" << str1.length() << "\n";
//     // Assignment
//     str3 = str1;
//     std::cout <<"After assignment: str3 = " << str3 <<"\n";
//     // Concatenation
//     std::string str4 = str1 + "How are you?";
//     std::cout <<"After concatenation: str4 = "<< str4 <<"\n";
//     // comparison
//     if (str1 == str3){
//         std::cout <<"str1 and str3 are equal.\n";
//     }
//     // Substring EXtraction
//     std::string sub = str2.substr(4,11);
//     std::cout <<"Substring of str2:" << sub <<"\n";
//     // Find
//     size_t pos = str
// }


// Class work error.cpp

//1.  W.A.P of Reference variable
// #include <iostream>
// using namespace std;
// int main (){
//     int x = 10;
//     int &a = x;
//     cout<<"value of x is"<<x<<endl;
//     cout<<"value of a"<<a<<endl;
//     x=20;
//     cout<<x<<endl;
//     cout<<a<<endl;
// }




//2.  W.A.P of Pointer variable
// #include <iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     int *ptr = &x;
//     cout<<"value of x"<<x<<endl;
//     cout<<"address of x"<<&x<<endl;
//     cout<<"access value of x using pointer"<<*ptr;
//     return 0;
// }




//3.  W.A.P of Pointer Variable + Function
// #include <iostream>
// using namespace std;
// void display (int *a)
// {
//     cout<<"value of a is"<<*a;
// }
// int main (){
//     int num = 10;
//     display (&num);
//     return 0;
// }




//4.  W.A.P of Pointer variable + Array



