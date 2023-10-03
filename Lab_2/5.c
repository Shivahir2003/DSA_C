// 5. Write a program to find factorial of a given number using loop.

#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}