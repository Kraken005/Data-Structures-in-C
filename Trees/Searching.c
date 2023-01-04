#include<stdio.h>
#include<stdlib.h>

int flag = 0;
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

void search(struct node *root, int item){
    //int flag = 0;
    if(root->data == item){
        flag++;
    }
    else if(item < root->data){
        search(root->left, item);
    }
    else if(item > root->data){
        search(root->right, item);
    }
    else{
        
    }
}

void main(){
    struct node *root;
    root = create();

    search(root, 66);
    if (flag == 1)
    {
        printf("Found");
    }
    else{
        printf("not Found");
    }
    
}