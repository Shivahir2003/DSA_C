// 15. Write a program to find position of the smallest number from given n numbers.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }

    printf("The position of the smallest number is %d", pos);

    return 0;
}