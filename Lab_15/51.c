// 51. Write a menu driven program to implement following operations on the singly linked list.
//     i. Insert a node at the end of the list
//     ii. Insert a node at the beginning of the list
//     iii. Delete the first node
//     iv. Delete the last node
//     v. Display the list



#include<stdio.h>
#include<stdlib.h>

// create a node(box bnavanu)
struct Node{
    int info;
    struct Node *link;
};

// create a pointer to point the first node(stack na top jevu)
struct Node *FIRST = NULL;

// insert at last
void InsertAtLast(int x){
    // create a new node(temporary node)
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->info = x;
    new->link = NULL;
    // if the list is empty then make the new node as the first node
    if(FIRST == NULL){

        FIRST = new;
    }
    // else traverse to the last node and make the new node as the last node(chele shudhi jav pachi insert kro)
    else{
        struct Node *save = FIRST;
        // chela node sudhi java mate
        while(save->link != NULL){
            save = save->link;
        }
        save->link = new;
    }
}

// insert at first
void InsertAtFirst(int x){
    // top ne replace kro 
    struct Node *new = (struct 
    Node *)malloc(sizeof(struct Node));
    new->info = x;
    new->link = FIRST;
    FIRST = new;
}


// delete at first
void DeleteAtFirst(){
    // top ne delete kro
    // then make next node as the first node(pachina node ne top banavo)
    struct Node *save = FIRST;
    FIRST = FIRST->link;
    free(save);
}

// delete at last
// traverse to the last node and delete the last node(chela node sudhi jav ena aagdna node ma address null aapo)
void DeleteAtLast(){
    // last node(chelo node)
    struct Node *save = FIRST;
    // last second node(chele thi aagdna node)
    struct Node *pred = FIRST;
    while(save->link != NULL){
        pred = save;
        save = save->link;
    }
    pred->link = NULL;
    free(save);
}

// display
void Print(){
    struct Node *save = FIRST;
    while(save != NULL){
        printf("%d ", save->info);
        save = save->link;
    }
    printf("\n");
}

int main(){
    int choice,n, x;
    // Regular loop as we done in stack and queue
    while(1){
        printf("1. Insert at last\n");
        printf("2. Insert at first\n");
        printf("3. Delete at first\n");
        printf("4. Delete at last\n");
        printf("5. Print\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the number: ");
                scanf("%d", &x);
                InsertAtLast(x);
                break;
            case 2:
                printf("Enter the number: ");
                scanf("%d", &x);
                InsertAtFirst(x);
                break;
            case 3:
                DeleteAtFirst();
                break;
            case 4:
                DeleteAtLast();
                break;
            case 5:
                Print();
                break;
            case 6:
                exit(0); // return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}