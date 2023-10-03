// 39. Write a program to evaluate given prefix expression.

#include<stdio.h>
#include<stdlib.h>

#define n 50
int top = -1;
int stack[n];

void push(int x){
    if(top == n-1){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top] = x;
    }
}

int pop(){
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        int val = stack[top];
        top--;
        return val;
    }
}

int main(){
    int op1,op2;
    char input[100];
    printf("Enter prefix expression: ");
    scanf("%s",input);
    int index = 0;
    for(int i = 0 ; input[i] != '\0'; i++){
        index = i;
    }
    
    for(int i=index;i>=0;i--){
        if(input[i]>='0' && input[i]<='9'){
            push(input[i]-'0');
        }
        else{
            op1 = pop();
            op2 = pop();
            switch(input[i]){
                case '+':
                    push(op1+op2);
                    break;
                case '-':
                    push(op1-op2);
                    break;
                case '*':
                    push(op1*op2);
                    break;
                case '/':
                    push(op1/op2);
                    break;
                case '%':
                    push(op1%op2);
                    break;
            }
        }
    }
    printf("Result: %d\n",pop());
    return 0;
}