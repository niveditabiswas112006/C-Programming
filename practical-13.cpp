// 13. Explain how swapping works using pointers.
// Modify above Program to find both the largest and smallest elements.
// Explain why *(ptr + i) is used to access array elements in Program 3.
// Write a program to calculate the product of two numbers using pointers.
// Add a feature to the above Program to calculate the sum of all array.
// elements using pointer arithmetic.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    printf("%d\n", *(ptr + 1));  // Outputs 20, the second element
    printf("%d\n", ptr[1]);      // Equivalent to *(ptr + 1)

    // Calculate sum of array elements
    int sum = 0;
    for(int i = 0; i < 3; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}