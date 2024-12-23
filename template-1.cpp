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


