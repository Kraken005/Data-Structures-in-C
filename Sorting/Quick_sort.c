#include<stdio.h>
#include<stdlib.h>

//Method - 1


// void swap(int a[], int b[], int x, int y){
//     int temp = a[x];
//     a[x] = b[y];
//     b[y] = a[x];
// }

// int quickSort(int arr[], int lb, int ub){
    
//     //lb = 0; ub = n;
//     int pivot, start, end;
//     pivot = lb;
//     start = lb;
//     end = ub;
//     while(start < end){
//         while(arr[start] <= pivot){
//             start++;
//         }
//         while(arr[end] > pivot){
//             end--;
//         }
//         if(start > end){
//             swap(arr, arr, start, end);
//         }
//     }
//     swap(arr, arr, lb, end);
//     return end;
// }

// void main(){
//     int a[5] = {3,4,2,5,1};
//     int n = sizeof(a) / sizeof(a[0]);
//     int lb, ub, pivot, start, end, loc;
//     if(lb < ub){
//         loc = quickSort(a, lb, ub);
//         quickSort(a, lb, loc - 1);
//         quickSort(a, loc + 1, ub);
//     }

//     printf("Elemenst sof array: \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", a[i]);
//     }
    
// }

//Method - 2

void quickSort(int arr[5], int lb, int ub){
    int pivot, start, end;
    pivot = arr[lb];
    start = lb;
    end = ub;
    while(start < end){
        while(arr[start] <= pivot ){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }
        if(start < end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp = arr[end];
    arr[end] = pivot;
    arr[lb] = temp;
    quickSort(arr,0, end -1);
    quickSort(arr, end +1, ub);
}

void main(){
    int a[5] = {3,5,2,4,1};
    int n = sizeof(a[5])/sizeof(a[0]);
    quickSort(a,0,n-1);
    printf("Sorted elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    
}