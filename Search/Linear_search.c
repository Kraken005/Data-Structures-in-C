#include<stdio.h>
#include<stdlib.h>

void linear(int data, int arr[]){
    //int arr[5];
    int item = data;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] == item){
            printf("Item %d found at position %d", item, i+1);
            break;
        }
        printf("y");
    }

    //if(i <)
    
}
void main(){
    int arr[5] = {1,2,3,4,5};
    int num;
    printf("Enter data to search\n");
    scanf("%d", &num);
    linear(num, arr);
    
    
}