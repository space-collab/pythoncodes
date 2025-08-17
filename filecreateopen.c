#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    char ch;
    int count = 0;

    // Input file name
    printf("Enter the name of the file to create: ");
    scanf("%s", filename);

    // Open file in write mode
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not create file %s\n", filename);
        return 1;
    }

    printf("Type some text (Press Ctrl+Z on Windows or Ctrl+D on Linux to end input):\n");

    // Read characters from user and write to file
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);
    }

    fclose(file);

    // Open file in read mode to count characters
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Count characters
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    printf("Number of characters in the file: %d\n", count);

    fclose(file);
    return 0;
}
