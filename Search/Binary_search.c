#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int mid;

    printf("Enter data to search\n");
    int num;
    scanf("%d", &num);
    int l = 0, r = 5;
    bool flag=true;
    
    while(l<=r){
    
        mid = (l + r)/2;

        if(num == arr[mid]){
            printf("Found at %d",mid);flag=false;break;
        }
        else if(num > arr[mid]){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    
}
if(flag)
printf("data not found");
    return 0;
}