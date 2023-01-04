#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top = 0;

void push(int num){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = num;
    newNode->next = top;
    top = newNode;
}

void pop(){
    struct node *temp;
    temp = top;
    if(top == 0)
    printf("Underflow Condition\n");
    else{
    printf("Deleted data is: %d\n", temp->data);
    top = top->next;
    free(temp);
    }
}

void display(){
    struct node *temp;
    temp = top;
    printf("Datas are: \n");
    while(temp!=0){
    printf("%d\t", temp->data);
    temp = temp->next;
    }
}

void main(){
    int choice, num, ch;
    
    do{
    printf("\nEnter choice: 1-Push\t2-Pop\t3-Display\t4-Exit\n");
    scanf("%d", &choice);
    switch(choice){
        case 1: printf("Enter data to push: \n");
        scanf("%d", &num);
        push(num);
        break;

        case 2: pop();
        break;

        case 3: display();
        break;

        case 4: printf("Exited Program.\n");
        ch = 55;
        break;

        default: printf("Invalid choice\n");
    }
    }while(ch!=55);
}