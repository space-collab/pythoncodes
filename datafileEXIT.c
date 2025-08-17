#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char firstName[50], lastName[50];
    int empNumber, age;

    // Open file for writing
    file = fopen("employee_data.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    printf("Enter employee information. Type 'EXIT' as first name to stop.\n");

    while (1) {
        printf("\nFirst Name: ");
        scanf("%s", firstName);

        // Check for exit condition
        if (strcmp(firstName, "EXIT") == 0) {
            break;
        }

        printf("Last Name: ");
        scanf("%s", lastName);

        printf("Employee Number: ");
        scanf("%d", &empNumber);

        printf("Age: ");
        scanf("%d", &age);

        // Write information to file in a single line
        fprintf(file, "%s %s %d %d\n", firstName, lastName, empNumber, age);
    }

    fclose(file);
    printf("Employee data saved successfully to 'employee_data.txt'.\n");

    return 0;
}
