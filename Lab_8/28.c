// 28. Show the process of reversing the list of given numbers {12, 34, 78, 23, 90, 67}
// using stack.

#include<stdio.h>
#define n 6
int stack[n];
int top = -1;


// Here in push we don't check the overflow condition because here we know the actual size of the stack.
void push(int x){
    top++;
    stack[top] = x;
}


// Here in pop we don't check the underflow condition because here we know the actual size of the stack.
int pop(){
    top--;
    return stack[top+1];
}

int main(){
    // Adding the elements to the stack.
    push(12);
    push(34);
    push(78);
    push(23);
    push(90);
    push(67);

    // Printing the elements of the stack.
    // Stack use LIFO (Last In First Out) method.
    // When we pop the elements from the stack then the last element which is added to the stack will be poped first.
    // And bydefault the top element of the stack is the last element which is added to the stack.
    printf("The elements of the stack are: ");
    for(int i=top; i>=0; i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}