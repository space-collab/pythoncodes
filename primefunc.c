#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to print primes in a range
void printPrimes(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int low, high;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers: ");
    printPrimes(low, high);

    return 0;
}
