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
int count = 0;
int leafNode(struct node *newnode){
    
    if(newnode == 0){
        return count;
    }
    
    leafNode(newnode->left);
    // if(newnode->left == 0 && newnode->right == 0){
    //     return count++;
    // }
    leafNode(newnode->right);
    
    return ++count;
}

int height(struct node *root){
    if(root == 0){
        return -1;
    }
    int l = height(root->left);
    int h = height(root->right);

    int max;
    max = l > h ? l : h;
    return max+1;
}

void main(){
    struct node *root;
    root = create();
    printf("Nodes: %d\n", leafNode(root));
    printf("Height: %d\n", height(root));
}