// 3. Write a program to determine whether the entered character is vowel or not.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A')
    {
        printf("Vowel");
    }
    else if (ch == 'e' || ch == 'E')
    {
        printf("Vowel");
    }
    else if (ch == 'i' || ch == 'I')
    {
        printf("Vowel");
    }
    else if (ch == 'o' || ch == 'O')
    {
        printf("Vowel");
    }
    else if (ch == 'u' || ch == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}