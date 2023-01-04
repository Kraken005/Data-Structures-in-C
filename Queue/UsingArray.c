#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 5
int front = -1, rear = -1;
int queue[N];

void enqueue(int num){
    if(front == N-1){
        printf("Overflow Condition\n");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = num;
    }
    else{
        rear++;
        queue[rear] = num;
    }
}

void dequeue(){
    if(front == rear)
    printf("Underflow Condition\n");
    else{
        printf("Dequeued item is: %d\n", queue[front]);
        front++;
    }
}

void peek(){
    printf("The topmost element is: %d\n", queue[front]);
}

void display(){
    printf("The elements in the queue are: \n");
    for(int i = front; i <= rear; i++){
        printf("%d\t", queue[i]);
        printf("\n");
    }
}

bool isFull(){
    if(rear == N-1)
    return true;
}

bool isEmpty(){
    if(front == rear)
    return true;
    else
    return false;
}

void main(){
    int choice, num;
    while(1){
    printf("Enter the choice: 1-Enqueue\t2-Dequeue\t3-Peek\t4-Display\t5-is Full\t6-is Empty\t7-Exit\n");
    scanf("%d", &choice);
    switch(choice){
        case 1: printf("Enter data to be entered\n");
        scanf("%d", &num);
        enqueue(num);
        break;

        case 2: dequeue();
        break;

        case 3: peek();
        break;

        case 4: display();
        break;

        case 5: isFull();
        break;

        case 6: isEmpty();
        break;

        case 7: printf("Program Terminated\n");
        exit(1);
        break;
        
        default: printf("Invalid Choice\n");
    }
    }
}