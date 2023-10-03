// 11. Write a program to print Fibonacci series (using recursion).

#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci series upto %d terms is:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}