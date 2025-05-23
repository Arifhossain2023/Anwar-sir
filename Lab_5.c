#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fact_for = 1, fact_while = 1;
    
    // Take input
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Factorial using for loop with iteration display
    printf("\nCalculating factorial using for loop:\n");
    for (i = 1; i <= num; i++) {
        fact_for *= i;
        printf("Iteration %d: fact_for = %llu\n", i, fact_for);
    }
    
    // Factorial using while loop with iteration display
    printf("\nCalculating factorial using while loop:\n");
    i = 1;
    while (i <= num) {
        fact_while *= i;
        printf("Iteration %d: fact_while = %llu\n", i, fact_while);
        i++;
    }
    
    // Final results
    printf("\nFinal Result:\n");
    printf("Factorial using for loop: %llu\n", fact_for);
    printf("Factorial using while loop: %llu\n", fact_while);
    
    // Verification
    if (fact_for == fact_while)
        printf("Both methods give the same result. Verified!\n");
    else
        printf("Mismatch in results. Something went wrong!\n");
    
    return 0;
}