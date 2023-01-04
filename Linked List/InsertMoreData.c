#include<stdio.h>
#include<stdalign.h>
#include<stdlib.h>

void main(){
    struct node{
        int data;
        struct node *next;
    };

    struct node *head, *newNode, *temp;
    head = 0;
    int choice;

    

    while(choice==0){
    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: \n");
    scanf("%d", &newNode->data);
    //newNode->next = 0;
    //head = newNode;

    if(head == 0){
        head = temp = newNode;
        newNode->next = 0;// This was causing problem.
        //sans this line the output wasn't displayed
    }
    else{
        temp->next = newNode;
        temp = newNode;
        newNode->next = 0;
    }

    
    
    printf("\nEnter choice: 0-Continue\t1-Stop\n");
    scanf("%d", &choice);

    
    
    }

    printf("Entered data are: \n");
    temp =  head;
    while(temp!=0){
    printf("%d\t", temp->data);
    temp = temp->next;
    //choice=0;
    }
   


}