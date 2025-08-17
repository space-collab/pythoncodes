#include <stdio.h>

int main() {
    char str[100];  // input string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string including spaces

    // Convert to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        // if character is lowercase a-z
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // convert to uppercase
        }
    }

    printf("Uppercase: %s\n", str);

    return 0;
}
