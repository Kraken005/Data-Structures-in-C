#include<stdio.h>
#include<stdlib.h>

void InsertPrint();
void InsertBeginning();
void InsertEnding();
void InsertPosition();
void DeleteBeg();
void DeleteEnd();
void DeletePosition();


struct node{
        int data;
        struct node *next;
    };

    struct node *head = 0, *temp, *newNode;
    //head = 0;
    int choice;

    
void main(){
    InsertPrint();
    //InsertBeginning();
    //InsertEnding();
    //InsertPosition();
    DeleteEnd();
    DeletePosition();
}

void InsertPrint(){
        while(choice==0){
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
        printf("0-Continue\t 1-Stop\n");
        scanf("%d", &choice);
    }

    printf("Traversing the Linked List: \n");
    temp = head;
    while(temp!=0){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    }


    void InsertBeginning(){
        //Inserting at starting position
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data for new node: \n");
    scanf("%d", &newNode->data);

    newNode->next = head;
    head = newNode;

    printf("Traversing the Linked List: \n");
    temp = head;
    while(temp!=0){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    }

    void InsertEnding(){
            //Inserting at end position
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: \n");
    scanf("%d", &newNode->data);
    temp = head;
    while(temp->next!=0){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = 0;

    printf("Traversing the Linked List: \n");
    temp = head;
    while(temp!=0){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    }

    void InsertPosition(){
        int pos, i = 1;
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter Position: \n");
        scanf("%d", &pos);

        temp = head;
        while(i < pos-1){
            temp = temp->next;
            ++i;
        }
        printf("Enter the data: \n");
        scanf("%d", &newNode->data);

        newNode->next = temp->next;
        temp->next = newNode;

        printf("Traversing the Linked List: \n");
        temp = head;
        while(temp!=0){
        printf("%d\t", temp->data);
        temp = temp->next;
        }
    }

    void DeleteBeg(){
        //Deleting from beginning
        temp = head;
        head = temp->next;
        free(temp);
    }

    void DeleteEnd(){
        printf("Deleting from the end");
    struct node *prevNode;
    temp = head;
    while(temp->next != 0){
        prevNode = temp;
        temp = temp->next;
    }
    
    if(temp->next = 0)
    printf("Empty list");
    else{
        prevNode->next = 0;
    }
    free(temp);

    printf("\nTraversing the Linked List: \n");
        temp = head;
        while(temp!=0){
        printf("%d\t", temp->data);
        temp = temp->next;
        }
    }

    void DeletePosition(){
        struct node *nodeNext;
        int pos, i = 1;
        newNode = (struct node*)malloc(sizeof(struct node));
        temp = head;

        printf("Enter the postion to delete: ");
        scanf("%d", &pos);

        while(i < pos-1){
            temp = temp->next;
            i++;
        }
        nodeNext = temp->next;
        temp->next = nodeNext->next;
        free(nodeNext);

        //Displaying the linked list
        printf("The Llinked List after deleting\n");
        temp = head;
        while(temp != 0){
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }

