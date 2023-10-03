// 26. Take a stack of size 3 and performing following operations. Show the position of
// stack at each step:
// i. Push 1
// ii. Push 2
// iii. Push 3
// iv. Push 4
// v. Pop
// vi. Pop
// vii. Push 5
// viii. Change 3rd element to 8
// ix. Push 6 & 7
// x. Traverse the stack


#include<stdio.h>

#define MAX 10
int stack[MAX];
int top = -1;

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

void change(int pos, int value){
    if(pos+1 > top){
        printf("Stack Overflow\n");
    }
    else{
        stack[pos+1] = value;
    }
}

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
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    push(5);
    change(3,8);
    push(6);
    push(7);
    display();
}