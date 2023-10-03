// 14. Write a program to calculate average of first n numbers.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    float avg = (float)sum / n;

    printf("The average of first %d numbers is %.2f", n, avg);

    return 0;
}