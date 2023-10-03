// 10. Write a program to calculate exp(x,y) (using recursion).

#include <stdio.h>

int exp(int x, int y)
{
    if (y == 0)
        return 1;
    return x * exp(x, y - 1);
}


int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("%d to the power %d is %d\n", x, y, exp(x, y));
    return 0;
}