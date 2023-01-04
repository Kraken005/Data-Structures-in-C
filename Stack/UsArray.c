#include<stdio.h>

#define N 5
int top = -1;
int stack[N];

void push(){
    int val;
    printf("Enter data: \n");
    scanf("%d", &val);
    if(top == N-1)
    printf("Overflow Condition\n");
    else{
        top++;
        stack[top] = val;
    }
}

void pop(){
    int del;
    if(top == -1)
    printf("Underflow Condition\n");
    else{
        del = stack[top];
        top--;
        printf("Deleted value is %d\n", del);
    }
}

void peek(){
    int val;
    val = stack[top];
    printf("Topmost value is %d\n", val);
}

void display(){
    printf("Values in stack are: \n");
    while(top!= -1){
        printf("%d\t", stack[top]);
        top--;
    }
}

void main(){
    int choice, ch;
    
    do{
    printf("Enter value: 1-Push\t2-Pop\t3-Peek\t4-Display\t5-Exit\n");
    scanf("%d", &choice);
    switch(choice){
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: peek();
        break;
        case 4: display();
        break;
        case 5: printf("Exited\n");
        ch = 55;
        break;
        default: printf("Invalid Choice");
    }
    }while(ch != 55);
}