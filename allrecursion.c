#include <stdio.h>

// (a) Sum of digits
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

// (b) Reverse a number
int reverseNumber(int n, int rev) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

// (c) Factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// (d) GCD using Euclidean Algorithm
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// (e) Fibonacci (nth term)
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num1, num2, n;

    // (a) Sum of digits
    printf("Enter a number to find sum of digits: ");
    scanf("%d", &num1);
    printf("Sum of digits of %d = %d\n", num1, sumOfDigits(num1));

    // (b) Reverse number
    printf("Enter a number to reverse: ");
    scanf("%d", &num1);
    printf("Reversed number: %d\n", reverseNumber(num1, 0));

    // (c) Factorial
    printf("Enter a number to find factorial: ");
    scanf("%d", &num1);
    printf("Factorial of %d = %d\n", num1, factorial(num1));

    // (d) GCD
    printf("Enter two numbers to find GCD: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));

    // (e) Fibonacci sequence
    printf("Enter number of Fibonacci terms: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
