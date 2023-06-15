#include <stdio.h>
#include <string.h>
// intializing the structures in single line without using the . operator
struct student
{
    int roll;
    char name[20];
    float cgpa;
};

int main()
{
    struct student s1 = {123, "guruprasad", 23.34};
    printf("roll no %d\n", s1.roll);
    printf("name %s\n", s1.name);
    printf("cgpa is %f\n", s1.cgpa);

    struct student s2 = {0};
    printf("roll no %d\n", s2.roll);
    printf("name %s\n", s2.name);
    printf("cgpa is %f\n", s2.cgpa);
}