#include <stdio.h>
#include <ctype.h>

int main() {
    int vec[100], count = 0;
    char input[20];
    char op;

    printf("Enter numbers one by one (operator to stop):\n");
    
    while (1) {
        scanf("%s", input);
        if (input[0] == '+' || input[0] == '-' || input[0] == '*' || 
            input[0] == '/' || input[0] == '%') {
            op = input[0];
            break;
        }
        sscanf(input, "%d", &vec[count]);
        count++;
    }

    for (int i = 0; i < count; i += 2) {
        if (i + 1 >= count) {
            printf("Insufficient number for last operation.\n");
            break;
        }
        printf("%d %c %d = ", vec[i], op, vec[i + 1]);
        
        if (op == '+')
            printf("%d\n", vec[i] + vec[i + 1]);
        else if (op == '-')
            printf("%d\n", vec[i] - vec[i + 1]);
        else if (op == '*')
            printf("%d\n", vec[i] * vec[i + 1]);
        else if (op == '/') {
            if (vec[i + 1] == 0)
                printf("Undefined (division by zero)\n");
            else
                printf("%.2f\n", (float)vec[i] / vec[i + 1]);
        }
        else {
            if (vec[i + 1] == 0)
                printf("Undefined (modulo by zero)\n");
            else
                printf("%d\n", vec[i] % vec[i + 1]);
        }
    }

    return 0;
}