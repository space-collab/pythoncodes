#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ' || ch == '\n') {  // count spaces (including newline from fgets)
            spaces++;
        } else if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) {
            // check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    return 0;
}
