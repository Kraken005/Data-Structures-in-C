#include<stdio.h>

int main(void){
int arr[50], size = 0, i = 0;

printf("Enter the size of array: ");
scanf("%d", &size);

printf("Enter the elements: ");
for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
}

printf("The elements in the array are: ");
for (int i = 0; i < size; i++)
{
    printf("%d\t", arr[i]);
}

return 0;
}
