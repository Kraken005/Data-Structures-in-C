#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

void inorder(struct node *root){
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}

void preorder(struct node *root){
    if (root == 0)
    {
        return;
    }
    printf("%d\t", root->data);
    preorder(root->left);
    preorder(root->right);
    
}

void postorder(struct node *root){
    if(root == 0){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t", root->data);
}


struct node *create(){
    int ch;
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: (-1 for no child)\n");
    scanf("%d", &ch);
    if (ch == -1)
    {
        return 0;
    }
    else{
        newNode->data = ch;
        printf("Enter data for left child: \n");
        newNode->left =  create(newNode->left);
        printf("Enter data for right child: \n");
        newNode->right = create(newNode->right);

        return newNode;

    }
    
}

void main(){
    struct node *root;
    root = create();

    printf("preorder\n");
    preorder(root);
}