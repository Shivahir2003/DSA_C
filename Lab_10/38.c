// 38. Write a program to evaluate given postfix expression.


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
        top--;
        return stack[top+1];
    }
}
int isDegit(char x){
    if(x>='0' && x<='9'){
            return 1;
    }
    return 0;
}

void evaluate(int op1,int op2,char opration){
    switch(opration){
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

int main(){
    int op1,op2;
    char input[100];
    printf("Enter posfix expression: ");
    scanf("%s",input);
    for(int i=0;input[i]!='\0';i++){
        if(isDegit(input[i])){
            push(input[i]-'0');
        }
        else{
            op2 = pop();
            op1 = pop();
            evaluate(op1,op2,input[i]);
        }
    }
    printf("Result: %d\n",pop());
    return 0;
}