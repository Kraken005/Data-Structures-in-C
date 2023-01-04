#include<stdio.h>
#include<stdlib.h>

#define N 5

int queue[N];
int front = -1, rear = -1;

void enqueue(int num){
    if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = num;
    }
    else if(front == rear){
        printf("Overflow Condition\n");
    }
    else{
        rear = (rear + 1)%N;
        queue[rear] = num;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Underflow Condition\n");
    }
    else if(front == rear){
        printf("Dequeued element is: %d", queue[front]);
        front = rear = -1;
    }
    else{
        printf("Dequeued element is: %d", queue[front]);
        front = (front + 1)%N;
    }
}

void peek(){
    printf("The frontmost element is: %d\n", queue[front]);
    printf("The rearmost element is: %d\n", queue[rear]);
}

void display(){
    int i = front;
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else{
        printf("Elements in queue are: \n");
        /*do{
            printf("%d\t", queue[i]);
            i = (i + 1)%N;
        }while(i != rear);*/
        for (int i = front; i != rear; i = (i + 1)%N)
        {
            printf("%d\t", queue[i]);
        }
        printf("%d", queue[rear]);
        
    }
}

void main(){
    int choice, num;
    while(1){
        printf("\nEnter choice: 1-Enqueue\t2-Dequeue\t3-Peek\t4-Display\t5-Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("Enter data: \n");
            scanf("%d", &num);
            enqueue(num);
            break;

            case 2: dequeue();
            break;

            case 3: peek();
            break;

            case 4: display();
            break;

            case 5: printf("Program Terminated\n");
            exit(0);
            break;

            default: printf("Invalid Choice");
        }
    }
}