#include<stdio.h>

void print(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    
}
int ar[5];
void merge(int a[], int lb, int mid, int ub){
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int ar[5];
    while(i <= mid && j <= ub){
        if(a[i] < a[j]){
            ar[k] = a[i];
            i++;
        }
        else{
            ar[k] = a[j];
            j++;
        }
        k++;
    }
    if(i > mid){
        while(j <= ub){
            ar[k] = a[j];
            j++; k++;
        }
    }
    else{
        while(i <= mid){
            ar[k] = a[i];
            i++; k++;
        }
    }
}

void mergeSort(int a[], int lb, int ub){
    int mid;
    if(lb < ub){
        mid = (lb + ub) / 2;
    }
    mergeSort( a, lb, mid);
    mergeSort(a, mid + 1, ub);
    merge(a, lb, mid, ub);
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
    //bubbleSort(arr, 5);
    mergeSort(arr, 0, 5);
    for (int i = 0; i < n; i++)
    {
        printf("%d", ar[i]);
    }
    
    
}