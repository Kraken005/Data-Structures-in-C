#include<stdio.h>
#include<stdlib.h>

void main(){
    struct node{
        int data;
        struct node *next;
    };

    struct node *head, *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data\n");
    scanf("%d", &newNode->data);


    printf("Entered data is: ");
    printf("%d", newNode->data);
}