// 17. Write a program to insert a number at a given location in an array.

#include<stdio.h>

int main()
{
    int n, i, pos, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n+10];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the number to be insert: ");
    scanf("%d", &pos);
    printf("Enter the value of number: ");
    scanf("%d",&num);
    for(i = pos; i < n; i++)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = num;
    n++;
    printf("The array after insertion is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}