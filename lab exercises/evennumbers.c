#include <stdio.h>

int main() {
    int low, high;

    // Accept input from the user
    printf("Enter the lower bound: ");
    scanf("%d", &low);

    printf("Enter the upper bound: ");
    scanf("%d", &high);

    printf("Even numbers between %d and %d are:\n", low, high);

    // Start from the next even number if low is odd
    if (low % 2 != 0) {
        low++;
    }

    // Print even numbers in the range
    for (int i = low; i <= high; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
