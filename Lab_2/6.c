// 6. Write a program to find power of a number using loop.

#include <stdio.h>

int main()
{
    int n, p, i, pow = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter power: ");
    scanf("%d", &p);
    for (i = 1; i <= p; i++)
        pow *= n;
    printf("%d to the power %d is %d\n", n, p, pow);
    return 0;
}