// 23. Write a program to calculate and display sum to two mXn matrices.

#include<stdio.h>

int main()
{
    int m, n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int arr1[m][n], arr2[m][n], arr3[m][n];
    printf("Enter the elements of the first matrix: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The sum of the two matrices is: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}