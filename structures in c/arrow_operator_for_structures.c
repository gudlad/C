#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[20];
    float cgpa;
};
// (*ptr).code can be written as ptr->code
int main()
{
    struct student s1 = {123, "guruprasad", 23.34};
    struct student *ptr;
    ptr = &s1;

    printf("name is %s\n", ptr->name);
    printf("name is %d\n", ptr->roll);
    printf("name is %f\n", ptr->cgpa);
}