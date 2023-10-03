// 19. Write a program to insert a number in an array that is already sorted in an ascending order.

#include<stdio.h>

int main()
{
    int n, i, pos, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be insert: ");
    scanf("%d", &num);
    for(i=0; i<n; i++)
    {
        if(arr[i] > num)
        {
            pos = i;
            break;
        }
    }
    for(i=n; i>=pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = num;
    n++;
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",arr[i]);
    }
    
}