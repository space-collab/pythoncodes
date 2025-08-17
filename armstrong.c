#include <stdio.h>
int main()
{
    int num, temp, digit, sum;
    for (int num = 0; num <= 999; num++)
    {
        temp = num;
        sum = 0;
        while (temp > 0)
        {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == num)
        {
            printf("%d ", num);
        }
    }
}
