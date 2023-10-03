// Use of realloc

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");
        for (int i = 0; i < 5; ++i)
        {
            ptr[i] = i + 1;
        }
        printf("The elements of the array are: ");
        for (int i = 0; i < 5; ++i)
        {
            printf("%d, ", ptr[i]);
        }
        printf("\n");
        ptr = realloc(ptr, 10 * sizeof(int));
        if (ptr == NULL)
        {
            printf("Memory not re-allocated.\n");
            exit(0);
        }
        else
        {
            printf("Memory successfully re-allocated using realloc.\n");
            for (int i = 5; i < 10; ++i)
            {
                ptr[i] = i + 1;
            }
            printf("The elements of the array are: ");
            for (int i = 0; i < 10; ++i)
            {
                printf("%d, ", ptr[i]);
            }
            printf("\n");
            free(ptr);
        }
    }
    return 0;
}