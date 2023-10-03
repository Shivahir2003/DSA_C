// 22. Write a program to read and display a 3X3 Matrix.

#include<stdio.h>

int main()
{
    int arr[3][3], i, j;
    printf("Enter the elements of the matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}