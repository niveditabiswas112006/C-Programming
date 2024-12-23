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