#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *create(){
    struct node *newNode;
    int ch;
    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: (Enter -1 to exit) \n");
    scanf("%d", &ch);

    if(ch == -1){
        return 0;
    }
    else{
        newNode->data = ch;
        printf("Enter data for left node\n");
        newNode->left = create();

        printf("Enter data for right child\n");
        newNode->right = create();

        return newNode;
    }
    
}

void main(){
    struct node *root;
    root = create();
}