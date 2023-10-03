// 16. Write a program to find whether the array contains a duplicate number or not.

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

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == num)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("The array contains a duplicate number");
    }
    else
    {
        printf("The array does not contain a duplicate number");
    }

    return 0;
}