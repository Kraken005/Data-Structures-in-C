#include<stdio.h>

void print(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    
}

void bubbleSort(int a[], int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    
}

void main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    printf("Array before sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\nArray after \n");
    bubbleSort(arr, 5);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
    
}