#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int Even_Array[n], Odd_Array[n];  // maximum possible size
    int evenCount = 0, oddCount = 0;

    // separate even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            Even_Array[evenCount] = arr[i];
            evenCount++;
        } else {
            Odd_Array[oddCount] = arr[i];
            oddCount++;
        }
    }

    // print even numbers
    printf("\nEven numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", Even_Array[i]);
    }

    // print odd numbers
    printf("\nOdd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", Odd_Array[i]);
    }

    printf("\n");
    return 0;
}
