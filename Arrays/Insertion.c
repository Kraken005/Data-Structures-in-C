#include<stdio.h>

int main(void){
    int arr[50], size, pos, num;

    printf("Enter the size of array:");
    scanf("%d", &size);

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element and position to insert: ");
    scanf("%d %d", &num, &pos);


    if (pos <= 0 || pos > size + 1)
    {
        printf("Invalid Position");
    }
    else{
    for (int i = size - 1; i >= pos -1; i--)    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
    size++;
    }

    printf("All the elements of the array are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    

    
    
}