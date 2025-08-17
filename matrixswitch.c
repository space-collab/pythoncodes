#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], C[rows][cols];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int choice;
    printf("\nSelect operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Addition
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                }
            }
            printf("Result of Addition:\n");
            break;

        case 2: // Subtraction
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    C[i][j] = A[i][j] - B[i][j];
                }
            }
            printf("Result of Subtraction:\n");
            break;

        case 3: // Multiplication
            // initialize C to 0
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    C[i][j] = 0;

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    for (int k = 0; k < cols; k++) {  // assuming square matrix
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            printf("Result of Multiplication:\n");
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    // print result
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
