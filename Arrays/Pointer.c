#include<stdio.h>

int main(void){
    int arr[50];
    int *p;
    int *q, num;
    num = 10;
    p = arr;
    q = &num;

    //p++;
    printf("%d\n", arr);
    printf("%d\n", p);
    p++;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", q);
    printf("%d\n", *q);
    printf("%d\n", q+1);
    printf("%d\n", num);
    printf("%d\n", &num);
    printf("%d\n", 3[arr]);

}