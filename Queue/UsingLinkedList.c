#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node  *temp, *front = 0, *rear = 0;
//front = rear = 0;

void enqueue(int num){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(front == 0 && rear == 0){
        front = rear = newNode;
        newNode->data = num;
        newNode->next = 0;
    }
    else{
        rear->next = newNode;
        newNode->data = num;
        newNode->next = 0;
        rear = newNode;
    }
}

void dequeue(){
    printf("Dequeued element is: %d", front->data);
    temp = front;
    front = front->next;
    free(temp);
}

void peek(){
    if(front == rear){
        printf("Underflow Condition\n");
    }
    else{
    printf("The frontmost element is: %d\n", front->data);
    printf("The rearmost element is: %d\n", rear->data);
    }
}

void display(){
    
    temp = front;
    if(front == rear){
            printf("Underflow Condition\n");
        }
    else{
        printf("Elements in queue are: \n");
        while(temp != 0){
        printf("%d\t", temp->data);
        temp = temp->next;
        }
    }
}

void main(){
    int choice, num;
    while(1){
        printf("\nEnter choice: 1-Enqueue\t2-Dequeue\t3-Peek\t4-Display\t5-Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to be enqueued: \n");
            scanf("%d", &num);
            enqueue(num);
            break;
        
        case 2:
        dequeue();
        break;

        case 3: 
        peek();
        break;

        case 4:
        display();
        break;

        case 5: printf("Program Terminated\n");
        exit(1);
        
        default:
        printf("Invalid choice\n");
            break;
        }
    }
}