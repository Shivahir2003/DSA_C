// 42. Write a menu driven program to perform following operations on a simple queue:
// i. Insert
// ii. Delete
// iii. Display

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
        printf("\n\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
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
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

void insert()
{
    int item;
    if(rear == MAX-1)
    {
        printf("Queue is full\n");
        return;
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &item);
    if(front == -1)
        front = 0;
    rear++;
    queue[rear] = item;
}

void delete()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted element is %d\n", queue[front]);
    if(front == rear)
    {
        front = -1;
        rear = -1;
        return;
    }
    front++;
}

void display()
{
    int i;
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    for(i=front; i<=rear; i++)
        printf("%d\t", queue[i]);
    printf("\n");
}

