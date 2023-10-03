// 4. Write a program to determine whether a given number is prime or not.

    // 1)using flag
    // 2)without flag
    // 3)with function



//using flag

#include <stdio.h>

int main()
{
    int num, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime.", num);
    }
    else
    {
        printf("%d is not prime.", num);
    }
    return 0;
}

//without flag

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not prime.", num);
            return 0;
        }
    }
        printf("%d is prime.", num);
    return 0;
}

// with function

#include <stdio.h>

int isPrime(int num)
{
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("%d is prime.", num);
    }
    else
    {
        printf("%d is not prime.", num);
    }
    return 0;
}