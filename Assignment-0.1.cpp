// Operator Overloading:
//1. W.A.P by using unary operator.
// #include <iostream>
// using namespace std;
// class demo
// {
//     public:
//     int num;
//     demo(int a)
//     {
//         num=a;
//         display();
//     }
//     demo operator ++()
//     {
//         num += 1;
//         return num;
//         display();
//     }
//     void display()
//     {
//         cout<<"Value of num is: " <<num <<endl;
//     }
// };
// int main ()
// {
//     ++demo(10);
// }

//2. W.A.P by using binary operator.
// #include <iostream>
// using namespace std;
// class Number
// {
//     private:
//     int n;
//     public:
//     void get_n()
//     {
//         cout<<"Enter the number";
//         cin>>n;
//     }
//     void put_n()
//     {
//         cout<<n<<endl;
//     }
//     Number operator +(Number Y)
//     {
//         Number ans;
//         ans.n=n+Y.n;
//         return ans;
//     }
// };
// int main()
// {
//     Number O1, O2, O3;
//     O1.get_n();
//     O2.get_n();
//     O3=O1.operator +(O2);
//     cout<<"\n Number 1=";
//     O1.put_n();
//     cout<<"\n Number 2=";
//     O2.put_n();
//     cout<<"\n Addition =";
//     O3.put_n();
//     return 0;
// }

//3. W.A.P decrement
// #include<iostream>
// using namespace std;
// class demo
// {
//     public:
//     int num;
//     demo(int a )
//     {
//         num = a;
//         display();
//     }
//     demo operator --()
//     {
//         num -= 1;
//         return num;
//         display();
//     }
//     void display()
//     {
//         cout<<"Value of num is:"<<num << endl;
//     }
// };
// int main ()
// {
//     --demo(10);
// }

//4. W.A.P subtraction.
// #include<iostream>
// using namespace std;
// class number
// {
//     private:
//     int n;
//     public:
//     void get_n()
//     {
//         cout <<"Enter the number:";
//         cin>>n;
//     }
//     void put_n()
//     {
//         cout << n << endl;
//     }
//     number operator -(number y)
//     {
//         number ans;
//         ans.n = n-y.n ;
//         return ans;
//     }
// };
// int main()
// {
//     number O1,O2,O3;
//     O1.get_n();
//     O2.get_n();
//     // o3=o1+o2;
//     O3 =O1.operator -(O2);
//     cout << "\n number 1 =" ;
//     O1.put_n();
//     cout << "\n number 2 =" ;
//     O2.put_n();
//     cout << "\n substraction = ";
//     O3.put_n();
//     return 0;
// }