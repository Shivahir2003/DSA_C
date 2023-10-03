// 49. Implement a program to create a node for singly linked list. Read the data in a
//      node then print the node and release the memory of the node.


#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next; //recall of struct
};


void display(struct Node * ptr){
    while(ptr!=NULL){
        printf("data is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void main()
{
    struct Node* head; //head is a pointer to a node
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node)); //malloc returns a void pointer, so we need to typecast it to a struct Node pointer
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 2; //head is a pointer to a node, so we use -> to access the data
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    //call display function
    display(head);

}