#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;  // pointer points to the first character

    // Loop until null character is reached
    while (*ptr != '\0' && *ptr != '\n') {  // ignore newline from fgets
        length++;
        ptr++;  // move pointer to next character
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
