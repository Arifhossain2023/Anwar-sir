#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseStr(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}

int main() {
    char string1[100], string2[100];
    printf("Enter a number or string: ");
    scanf("%s", string1);
    strcpy(string2, string1);  // Copy original string
    reverseStr(string2);       // Reverse the copy

    if (strcmp(string1, string2) == 0)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");
    
    return 0;
}