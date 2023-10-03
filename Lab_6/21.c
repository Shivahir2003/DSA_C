// 21. Write a program to merge two unsorted arrays.

#include<stdio.h>

int main()
{
    int n, m, i, j;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the elements of the first array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the elements of the second array: ");
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[n+m];
    for(i=0; i<n; i++)
    {
        arr3[i] = arr1[i];
    }
    for(i=0, j=n; i<m; i++, j++)
    {
        arr3[j] = arr2[i];
    }
    printf("The merged array is: ");
    for(i=0; i<n+m; i++)
    {
        printf("%d ", arr3[i]);
    }
}