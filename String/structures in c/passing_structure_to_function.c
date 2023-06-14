#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[20];
    float cgpa;
};
void printInfo(struct student s1); // function prototype
void _printInfo(struct student *ptr);

int main()
{
    struct student s1 = {123, "guruprasad", 23.34};
    struct student *ptr;
    ptr = &s1;

    printInfo(s1); //  s1 is passed as argument
    _printInfo(ptr);
    // structures follow the pass by value so same copy is created
}

void printInfo(struct student s1)
{
    printf("name is %s\n", s1.name);
    printf("name is %d\n", s1.roll);
    printf("name is %f\n", s1.cgpa);
}

void _printInfo(struct student *ptr)
{
    printf("name is %s\n", ptr->name);
    printf("name is %d\n", ptr->roll);
    printf("name is %f\n", ptr->cgpa);
}
