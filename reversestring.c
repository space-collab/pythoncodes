#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *ptr;
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline if present
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    ptr = str + length - 1;  // pointer to the last character

    printf("Reversed string: ");
    while (ptr >= str) {
        putchar(*ptr);  // print character pointed by ptr
        ptr--;          // move pointer backward
    }
    printf("\n");

    return 0;
}
