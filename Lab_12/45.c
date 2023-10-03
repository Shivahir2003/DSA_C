// 45. Write a menu driven program to perform following operations on a circular queue:


// i) Insert
// ii) Delete
// iii) Display

#include<stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void insert();
void delete();
void display();

int main()
{
    int choice;
    while(1)
    {
        printf("\n\n1. Insert\n2. Delete\n3. Display\n4. Exit\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: return 0;
            default: printf("\nInvalid choice!");
        }
    }
}

void insert()
{
    int item;
    if(front==0&&rear==MAX-1 || rear == front-1){
        printf("\nOverflow\n");
        return;
    }
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &item);
    if(front == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = item;
        return;
    }
    else if(rear == MAX-1 && front!=0){
        rear = 0;
        queue[rear] = item;
    }
    else{
        rear++;
        queue[rear] = item;
    }
    
    
   
}

void delete()
{
    if(front == -1)
    {
        printf("\nQueue is empty!");
        return;
    }
    printf("\nDeleted element is: %d", queue[front]);
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if(front == MAX-1)
            front = 0;
        else
            front = front+1;
    }
}

void display(){
    int i;
    if(front == -1)
    {
        printf("\nQueue is empty!");
        return;
    }
    printf("\nQueue elements are:\n");
    if(front <= rear)
    {
        for(i=front; i<=rear; i++)
            printf("%d\t", queue[i]);
    }
    else
    {
        for(i=front; i<=MAX-1; i++)
            printf("%d\t", queue[i]);
        for(i=0; i<=rear; i++)
            printf("%d\t", queue[i]);
    }
}