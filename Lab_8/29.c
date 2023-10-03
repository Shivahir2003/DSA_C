// 29. Write a program to reverse the list of given numbers using stack.

#include<stdio.h>   
#define n 100
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

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // push the elements of the array to the stack.
    for(int i=0; i<n; i++){
        push(arr[i]);
    }

    // pop the elements of the stack and store them in the array.
    for(int i=0; i<n; i++){
        arr[i] = pop();
    }

    // Printing the elements of the array.
    printf("The elements of the array are: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }    
}