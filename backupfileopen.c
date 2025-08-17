#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char filename[100], backupFilename[110];
    FILE *sourceFile, *backupFile;
    int byteCount = 0;
    char ch;

    // Input file name
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open source file for reading
    sourceFile = fopen(filename, "rb");  // read in binary mode
    if (sourceFile == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Count bytes
    while ((ch = fgetc(sourceFile)) != EOF) {
        byteCount++;
    }
    printf("Number of bytes in the file: %d\n", byteCount);

    // Prepare backup file name
    strcpy(backupFilename, filename);
    strcat(backupFilename, ".backup");

    // Open backup file for writing
    backupFile = fopen(backupFilename, "wb");  // write in binary mode
    if (backupFile == NULL) {
        printf("Error: Could not create backup file %s\n", backupFilename);
        fclose(sourceFile);
        return 1;
    }

    // Copy content to backup file
    rewind(sourceFile);  // move pointer to beginning of source file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, backupFile);
    }

    printf("Backup file created successfully: %s\n", backupFilename);

    // Close files
    fclose(sourceFile);
    fclose(backupFile);

    return 0;
}
