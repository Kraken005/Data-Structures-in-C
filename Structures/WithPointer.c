#include<stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main(void){
    struct Student s1 = {21, "Tiku", 43.56f};
    struct Student *ptr = &s1;
    //s1 = {21, "Tiku", 43.56f};
    printf("%d %s %f \n", s1.roll, s1.name, s1.marks);
    printf("%d %s %f", ptr->roll, ptr->name, ptr->marks);

    return 0;
}