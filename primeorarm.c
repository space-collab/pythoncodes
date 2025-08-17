#include <stdio.h>
#include <math.h>

// Function to check if number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to check if number is Armstrong
int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;

    // count digits
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    return 0;
}
