// 69. Area of rectangle:
// code statement:
// #include <iostream>
// using namespace std;
// class circle{
//     public:
//     int rad;
//     void areacirc(){
//         cout<<"Area of circle is: "<<rad * rad * (3.14)<<endl;
//     }
//     void pericirc(){
//         cout<<"perimeter of circle is: "<<rad * (3.14) * 2 <<endl;
//     }
// };
// class rectangle{
//     public:
//     int l, b;
//     void arearect(){
//         cout<<"Area of rectangle is: "<<l * b <<endl;
//     }
//     void perirect(){
//         cout<<"Area of rectangle ia: "<<l * b <<endl;
//     }
// };
// class square{
//     public:
//     int side;
//     void areasqu(){
//         cout<<"Area of square is: "<<side * side <<endl;
//     }
//     void perisqu(){
//         cout<<"Area of square is: "<<4 * side <<endl;
//     }
// };
// class display: public circle, public square, public rectangle
// {
//     public:
//     void getcirc(){
//         cout<<"\n enter radius: ";
//         cin>>side;
//     }
//     void getsqu(){
//         cout<<"\n enter the side of square: ";
//         cin>>side;
//     }
//     void getrect(){
//         cout<<"\n enter length & breadth of rect: ";
//         cin>>l>>b;
//     }
// };
// int main(){
//     display d;
//     d.getcirc();
//     d.getsqu();
//     d.getrect();
//     d.areacirc();
//     d.pericirc();
//     d.areasqu();
//     d.perisqu();
//     d.arearect();
//     d.perirect();
//     return 0;
// }