#include <stdio.h>

int main() {
    float a, b, c, d, det;

    printf("Enter elements of 2x2 matrix (row-wise): ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    // calculate determinant
    det = a*d - b*c;

    if (det == 0) {
        printf("Inverse does not exist (determinant = 0).\n");
        return 0;
    }

    printf("Inverse of the matrix is:\n");
    printf("%.2f\t%.2f\n", d/det, -b/det);
    printf("%.2f\t%.2f\n", -c/det, a/det);

    return 0;
}
