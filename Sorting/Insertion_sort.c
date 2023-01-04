#include<stdio.h>
#include<stdlib.h>

void main(){
    int arr[5] = {5,3,4,2,1};

    int n = 5;

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] =  temp;
    }
    
    printf("Array after sorting is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
}