#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[20];
    float cgpa;
};

int main()
{
    struct student s1 = {123, "guruprasad", 23.34};
    struct student *ptr;
    ptr = &s1; // ptr holds the address of the structure instance s1
               // printing values using the structure

    // (*ptr) points to entire s1 i.e {123, "guruprasad", 23.34}
    // to get the particular value we can use . operator

    printf("name is %s\n", (*ptr).name);
    printf("name is %d\n", (*ptr).roll);
    printf("name is %f\n", (*ptr).cgpa);

    // printf("name %s\n", s2.name);
    // printf("cgpa is %f\n", s2.cgpa);
}