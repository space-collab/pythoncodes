#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least 2 elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], secondLargest = arr[0];
    int smallest = arr[0], secondSmallest = arr[0];

    // find largest and second largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("\nLargest element = %d", largest);
    if (largest == secondLargest)
        printf("\nNo second largest element (all elements equal).\n");
    else
        printf("\nSecond largest element = %d\n", secondLargest);

    printf("Smallest element = %d", smallest);
    if (smallest == secondSmallest)
        printf("\nNo second smallest element (all elements equal).\n");
    else
        printf("\nSecond smallest element = %d\n", secondSmallest);

    return 0;
}
