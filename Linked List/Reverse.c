#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void main(){
    struct node *temp, *head, *newNode;
    head = 0;
    int choice = 0;
    
    printf("Enter data elements to be inserted: \n");
    while(choice == 0){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: \n");
        scanf("%d", &newNode->data);
        
        if(head == 0){
            head = temp = newNode;
            newNode->next = 0;
        }
        else{
            temp->next = newNode;
            temp = newNode;
            newNode->next = 0;
        }

        printf("Enter choice: 0-Yes  1-No\n");
        scanf("%d", &choice);
    }

    printf("The elements are: \n");
    temp = head;
    while(temp != 0){
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    //Reversing a Linked List
    struct node *prevNode, *currNode, *nextNode;
    prevNode = 0;
    temp = head;
    currNode = nextNode = temp;
    while(currNode != 0){
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    head = prevNode;

    printf("\nReverse element: \n");
    temp = head;
    while(temp!= 0){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}