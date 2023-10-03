// 24. Write a program two multiply two matrices.

#include<stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, r1, c1, r2, c2, sum = 0;

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);  

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("The matrices cannot be multiplied with each other.\n");
    }
    else
    {
        printf("Enter the elements of first matrix:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of second matrix:\n");
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("The first matrix is:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("The second matrix is:\n");
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                for(k = 0; k < r2; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }

        printf("The resultant matrix is:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}