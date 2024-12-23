//1. W.A.P to write "Hello World!"
// #include <iostream>
// using namespace std; 
// int main() {
//     cout<<"Hello World"<<endl; 
//     return 0; 
// }

//2. W.A.P. to check whether number is prime number or not
// #include <iostream>
// using namespace std;
// bool isPrime(int n) {
//     if (n <= 1) {
//         return false; // Numbers less than or equal to 1 are not prime
//     }
//     // Loop to check divisibility from 2 to n-1
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             return false; // If n is divisible by any number other than 1 and itself, it is not prime
//         }
//     }
//     return true; // If no divisors are found, n is prime
// }
// int main() {
//     int num;
//     // Input from user
//     cout << "Enter a number: ";
//     cin >> num;
//     // Check and display if the number is prime
//     if (isPrime(num)) {
//         cout << num << " is a prime number." << endl;
//     } else {
//         cout << num << " is not a prime number." << endl;
//     }
//     return 0;
// }

//3. W.A.P. to check whether given number is amrstrong number or not
// #include <iostream>
// #include <cmath>
// using namespace std;
// bool isArmstrong(int n) {
//     int sum = 0, originalNumber, remainder, numDigits;
//     // Store the original number
//     originalNumber = n;  
//     // Find the number of digits
//     numDigits = log10(n) + 1;
//     // Calculate the sum of each digit raised to the power of numDigits
//     while (n > 0) {
//         remainder = n % 10;  // Get the last digit
//         sum += pow(remainder, numDigits);  // Add the power of the digit
//         n /= 10;  // Remove the last digit
//     }
//     // If sum equals the original number, it is an Armstrong number
//     return sum == originalNumber;
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isArmstrong(num)) {
//         cout << num << " is an Armstrong number." << endl;
//     }
//     else {
//         cout << num << " is not an Armstrong number." << endl;
//     }
//     return 0;
// }

//4. #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={10,20,30,40,50};
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[4]<<endl;
//     cout<<arr[4]<<endl;
//     return 0;
// }

//5. #include <iostream>
// using namespace std;
// int main()
// {
//     int x[5]={1,2,3,4,5};
//     x[4]=20;
//     for (int i=0; i<5; i++)
//     {
//         cout<<x[i]<<endl;
//     }
//     return 0;
// }

//6. #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={10,20,30,40,50};
//     for( int i = 0; i<5; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

//7. #include <iostream>
// using namespace std;
// int main(){
//     int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//     for( int i = 0; i<20; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

//8. #include <iostream>
// using namespace std;
// int main(){
//     int test[2][2]={1,1,2,2};
//     cout<<test[0][0];
//     cout<<test[0][1]<<endl;
//     cout<<test[1][0];
//     cout<<test[1][1]<<endl;
//     return 0;
// }

//9. #include <iostream>
// using namespace std;
// int main(){
//     int test[2][2]={{1,1},{2,2}};
//     for( int i = 0; i<2; i++)
//     {
//         for (int j=0; j<2; j++)
//         {
//             cout<<test[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//10. #include <iostream>
// using namespace std;
// int main(){
//     int x[5];
//     for (int i=0; i<5; i++)
//     {
//         cout<<"Enter an marks:";
//         cin>>x[i];
//     }
//     return 0;
// }

//11. #include <iostream>
// using namespace std;
// int main(){
//     int test[2][2]={{1,1},{2,2}};
//     for( int i = 0; i<2; i++)
//     {
//         for (int j=0; j<2; j++)
//         {
//             cout<<"Enter an marks:";
//             cin>>test[i][j];
//         }
//     }
// for (int i = 0; i<2; i++)
//     {
//         for (int j=0; j<2; j++)
//         {
//             cout<<" "<<test[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//12. #include <iostream>
// using namespace std;
// int main(){
//     int num1 = 5;
//     int num2 = 10;
//     int sum = num1 + num2;
   // cout << " The num of " << num1 << " and " << num2 << " is: " <<endl;
//     return 0;
// }

//13. #include <iostream>
// using namespace std;
// int main(){
//     int num1 = 10;
//     int num2 = 3;
//     int sub = num1 - num2;
//     cout << " The num of " << num1 << " and " << num2 << " is: " << sub <<endl;
//     return 0;
// }

//14. #include <iostream>
// using namespace std;
// int main(){
//     int num1 = 5;
//     int num2 = 10;
//     int multiple = num1 * num2;
//     cout << " The num of " << num1 << " and " << num2 << " is: " << multiple <<endl;
//     return 0;
// }

//15. #include <iostream>
// using namespace std;
// int main(){
//     int num1 = 81;
//     int num2 = 9;
//     int division = num1 / num2;
//     cout << " The num of " << num1 << " and " << num2 << " is: " <<division <<endl;
//     return 0;
// }

//16. #include <iostream>
// using namespace std;
// int main() {
//     float number;
//     cout << "Enter a number: ";
//     cin >> number;
//     if (number > 0) {
//         cout << "The number is positive." << endl;
//     }
//     else if (number < 0) {
//         cout << "The number is negative." << endl;
//     }
//     else {
//         cout << "The number is zero." << endl;
//     }
//     return 0;
// }

//17. #include <iostream>
// using namespace std;
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     if (number % 2 == 0) {
//         cout << "The number is even." << endl;
//     } else {
//         cout << "The number is odd." << endl;
//     }
//     return 0;
// }

//18. #include <iostream>
// using namespace std;
// int main() {
//     float number;
//     cout << "Enter a number: ";
//     cin >> number;
//     if (number > 0) {
//         cout << "The number is positive." << endl;
//     }
//     else if (number < 0) {
//         cout << "The number is negative." << endl;
//     }
//     else {
//         cout << "The number is zero." << endl;
//     }
//     return 0;
// }

//19. #include <iostream>
// using namespace std;
// int main() {
//     int day;
//     cout << "Enter a number (1-7) to get the corresponding day of the week: ";
//     cin >> day;
//     switch(day) {
//         case 1:
//             cout << "sunday" << endl;
//             break;
//         case 2:
//             cout << "monday" << endl;
//             break;
//         case 3:
//             cout << "tuesday" << endl;
//             break;
//         case 4:
//             cout << "wednesday" << endl;
//             break;
//         case 5:
//             cout << "thursday" << endl;
//             break;
//         case 6:
//             cout << "friday" << endl;
//             break;
//         case 7:
//             cout << "saturday" << endl;
//             break;
//         default:
//             cout << "Invalid input! Please enter a number between 1 and 7." << endl;
//             break;
//     }
//     return 0;
// }

//20. #include <iostream>
// using namespace std;
// int main() {   
//     int num1,num2, result;
//     char calculation ;
//     cout << "Enter a calculation";
//     cin >> calculation;
//     switch(calculation) {
//         case 1:
//             result = num1 + num2;
//             cout << "sum" << result << endl;
//             break;
//         case 2:
//             result = num2 - num1;
//             cout << "sub" << result << endl;
//             break;
//         case 3:
//             result = num1 * num2;
//             cout << "multiple" << result << endl;
//             break;
//         case 4:
//             result = num1 / num2;
//             cout << "division" << result << endl;
//             break;
//         default:
//             cout << "Please enter a number" << num1 << "and" << num2 << "is:" << endl;
//             break;
//     }  
//     return 0;
// }

//21. #include <iostream>
// using namespace std;
// int main() {
//     int marks;
//     cout << "Enter the marks (35-90): ";
//     cin >> marks;
//     switch(marks / 10) {
//         case 10:
//         case 9:
//             cout << "Grade: A+" << endl;
//             break;
//         case 8:
//             cout << "Grade: A" << endl;
//             break;
//         case 7:
//             cout << "Grade: B" << endl;
//             break;
//         case 6:
//             cout << "Grade: C" << endl;
//             break;
//             cout << "Grade: (below 35) Fail" << endl;
//             break;
//         default:
//             cout << "Invalid marks. Please enter a valid number between 35 and 90." << endl;
//             break;
//     }
//     return 0;
// }

//22. #include <iostream>
// using namespace std;
// int main() {
//     int num1, num2, num3;   
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;
//     cout << "Enter the third number: ";
//     cin >> num3;
//     if (num1 >= num2 && num1 >= num3) {
//         cout << "The largest number is " << num1 << endl;
//     }
//     else if (num2 >= num1 && num2 >= num3) {
//         cout << "The largest number is " << num2 << endl;
//     }
//     else {
//         cout << "The largest number is " << num3 << endl;
//     }
//     return 0;
// }

//23. #include <iostream>
// using namespace std;
// int main() {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout << year << " is a leap year." << endl;
//     }
//     else {
//         cout << year << " is not a leap year." << endl;
//     }
//     return 0;
// }

//24. #include <iostream>
// using namespace std;
// int main (){
//     int x;
//     int fact = 1;
//     cout << "Enter a number";
//     cin >> x
//     for (int i = 1; i < = x; i++){
//         fact = fact*i;
//     }
// cout << fact;   
// }

//25. C++ program to find factorial of a number using iteration
// #include <iostream>
// using namespace std;
// int main()
// {
//     // number n whose factorial needs to be find
//     int n = 5;
//     // initialize fact variable with 1
//     int fact = 1;
//     // loop calculating factorial
//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     // print the factorial of n
//     cout << "Factorial of " << n << " is " << fact << endl;
//     return 0;
// }

//26. #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int fact = 5;
//     for (int i = 1; i<= n; i++)
//     {
//         fact = fact * i;
//     }
//     cout << "Factorial of" << n << "is" << fact << endl;
//     return 0;
// }

//27. #include <iostream>
// using namespace std;
// int main (){
//     int num=123, reverse = 0, remainder;
//     cout << "Enter a number:";
//     cin >> num;
//     while (num != 0)
//     {
//         remainder = num %10;
//         reverse = reverse * 10 + remainder;
//         num /= 10;
//     }
//     cout << "Reverse numder:" << reverse << endl;
//     return 0;
// }

//28. #include <iostream>
// using namespace std;
// int main (){
//     int num=123, reverse = 0, remainder;
//     cout << "Enter a number:";
//     cin >> num;
//     while (num != 0)
//     {
//         remainder = num %100;
//         reverse = reverse % 100 + remainder;
//         num /= 100;
//     }
//     cout << "Reverse numder:" << reverse << endl;
//     return 0;
// }

//29. #include <iostream>
// using namespace std;
// int main(){
//     int num, sum = 0, number;
//     cout << " Enter number:";
//     cin >>
// }