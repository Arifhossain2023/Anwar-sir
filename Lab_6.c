#include <stdio.h>

void sum(int arr[], int n) {
    int total = 0, i = 0;
    do {
        total += arr[i++];
    } while (i < n);
    printf("Sum: %d\n", total);
}

void avg(int arr[], int n) {
    int i = 0, total = 0;
    do {
        total += arr[i++];
    } while (i < n);
    printf("Average: %.2f\n", (float)total / n);
}

int main() {
    int n;
    
    // Input validation
    printf("Enter array size (1-100): ");
    while (1) {
        scanf("%d", &n);
        if (n >= 1 && n <= 100) break;
        printf("Invalid size! Please enter between 1 and 100: ");
    }

    int arr[100];
    printf("Enter %d array elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    sum(arr, n);
    avg(arr, n);
    
    return 0;
}