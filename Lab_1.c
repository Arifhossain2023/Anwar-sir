#include <stdio.h>
int main() {
    int num1, num2;
    char charecter, press;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter +,-,*,/,%c: ", '%');
    scanf(" %c", &charecter);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Enter =: ");
    scanf(" %c", &press);
    if (press == '=') {
        if (charecter == '+')
        printf("%d+%d = %d\n", num1, num2, num1 + num2);
        else if (charecter == '-')
        printf("%d-%d = %d\n", num1, num2, num1 - num2);
        else if (charecter == '*')
        printf("%d*%d = %d\n", num1, num2, num1 * num2);
        else if (charecter == '/')
        printf("%d/%d = %.2f\n", num1, num2, (float)num1 / num2);
        else
        printf("%d%%%d = %d\n", num1, num2, num1 % num2);
        }
    return 0;
}