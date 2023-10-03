// 27. Write a menu driven program to perform following operations on a stack:
    // i. Push
    // ii. Pop
    // iii. Peep
    // iv. Change

#include<stdio.h>

// define MAX size of Stack
#define MAX 10

// declare stack array and top globally

int stack[MAX];
int top = -1;

// push function

void push(int data){
    if(top == MAX - 1){
        printf("Stack Overflow \n");
    }
    else{
        top++;
        stack[top] = data;
        printf("%d is added \n",data);
    }
}

// pop function
int pop(){
    if(top < 0){
        printf("Stack Underflow\n");
        return 0;
    }
    else{
        int value = stack[top];
        top--;
        return value;
    }
}

// peep function
void peep(){
    if(top == -1){
        printf("No Elements are there\n");
    }
    else{
        printf("%d \n",stack[top]);
    }
}

// change function
void change(int pos, int value){
    if(pos > top){
        printf("Stack Overflow\n");
    }
    else{
        stack[pos] = value;
    }
}


// display function
void display(){
    if(top < 0){
        printf("Stack Underflow\n");
    }
    else{
        printf("Elements : \n");
        for(int i = top ; i >= 0 ; i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
    
}

// main function
int main(){
    int flag = 0;
    while(flag == 0){
        int ch;
        printf(" 1.Push \n 2.Pop \n 3.Peep \n 4.Change \n 5.Diaplay \n 6.Exit \n");
        printf("Enter operation : ");
        scanf("%d",&ch);
        if(ch == 1){
            int data;
            printf("Enter Value : ");
            scanf("%d",&data);
            push(data);    
        }
        else if(ch == 2){
            printf("%d is poped\n",pop());
        }
        else if(ch == 3){
            peep();
        }
        else if(ch == 4){
            int pos,value;
            printf("Enter Pos : ");
            scanf("%d",&pos);
            printf("Enter Value : ");
            scanf("%d",&value);
            change(pos,value);
        }
        else if(ch == 5){
            display();
        }
        else if(ch == 6){
            return 0;
        }
        else{
            printf("Wrong input!\n");
        }
    }
}