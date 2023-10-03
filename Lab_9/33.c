#include<stdio.h>
#include<ctype.h>

char stack[100];
char exp[100];

int top = -1;

void push(char x)
{
	top++;
    stack[top] = x;
}

char pop()
{
    if(top == -1)
	return -1;
    else
	{
		top--;
	return stack[top + 1];
	}
}

int priority(char x)
{
    if(x == '(')
	return 0;
    if(x == '+' || x == '-')
	return 1;
    if(x == '*' || x == '/')
	return 2;
    return 0;
}

int main()
{
    char e, x; 
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    int i =0;
    e = exp[i++];
    while(e != '\0e')
    {
	if(isalnum(e) != 0)
	    printf("%c ",e);
	else if(e == '(')
	    push(e);
	else if(e == ')')
	{
	    while((x = pop()) != '(')
		printf("%c ", x);
	}   
	else
	{
	    while(priority(stack[top]) >= priority(e))
		{
		printf("%c ",pop());
		}

	    push(e);
	}
	e = exp[i++];
    }

    while(top != -1)
    {
	printf("%c ",pop());
    }
    
}