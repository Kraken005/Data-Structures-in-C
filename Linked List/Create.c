#include<stdio.h>
#include<stdlib.h>

void main(){
    struct node{
        int data;
        struct node *next;
    };

    struct node *head, *newNode, *temp;
    head = 0;
    int choice = 0;

    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter choice: 1-Insert\t2-Traverse\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
    printf("Enter data\n");
    scanf("%d", &newNode->data);
    newNode->next = 0;
    
    if(head == 0)
    head = temp = newNode;
    else{
        temp -> next = newNode;
        temp = newNode;
    }
    break;

    case 2:
    printf("Traversing the Linked List\n");
    temp = head;
    while(temp != 0){
        printf("%d", temp->data);
        temp = temp->next;
    }
    break;

    default: 
    printf("Invalid Choice");
    }
}