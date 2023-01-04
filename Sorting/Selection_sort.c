#include<stdio.h>
#include<stdlib.h>

void swap(int a[], int b[], int x, int y){
    int temp = a[x];
    a[x] = b[y];
    b[y] = temp;
}

void main(){
    int arr[5] = {2,4,3,1,5};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1 ; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            
            
        }
        if (min != i)
            {
                swap(arr, arr, min, i);
            }
        
    }
    printf("Elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
    
}