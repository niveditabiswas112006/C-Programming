// 68. saving bank account:
// code statement:
// #include <iostream>
// #include <string>
// using namespace std;
// class bankaccount{
//     private:
//     string AccountHolderName;
//     int AccountNumber;
//     double balance;
//     public:
//     bankaccount(string name, int number, double initialbalance){
//         AccountHolderName=name;
//         AccountNumber=number;
//         balance=initialbalance;
//     }
//     void credit(double amount){
//         if (amount > 0){
//             balance += amount;
//             cout<<"Amount Credited: "<<amount <<".New balance: "<<balance <<endl;
//         }
//         else{
//             cout<<"Invalid amount please enter a positive value.\n";
//         }
//     }
//     void debit(double amount){
//         if (amount > 0 && amount <= balance){
//             balance -= amount;
//             cout<<"amount debited: "<<amount <<".New balance: "<<balance <<endl;
//         }
//         else{
//             cout<<"Insufficient funds or Invalid Amount.\n";
//         }
//     }
//     void displayAccountDetails() const {
//         cout << "Account Holder: " << AccountHolderName;
//         cout << "\n Account No: " << AccountNumber;
//         cout << "\n Current balance: " << balance << endl;
//     }
// };

// int main() {
//     bankaccount myAccount("John", 123456, 500.0);
//     cout << "Initial account detail:\n";
//     myAccount.displayAccountDetails();

//     cout << "\nPerforming Operation:\n";
//     myAccount.credit(200.0);
//     myAccount.debit(100.0);
//     myAccount.debit(700.0);

//     cout << "\nFinal account details:\n";
//     myAccount.displayAccountDetails();
//     return 0;
// }
