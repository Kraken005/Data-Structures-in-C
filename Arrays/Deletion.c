#include<stdio.h>

int main(void){
    int arr[50], size, pos;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter postion for deletion: ");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size)
    {
        printf("Invalid  choice");
    }
    else
    {
        for (int i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        
    }
    
    printf("All elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}