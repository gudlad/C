//! structures are stored in contiguous memory locations like array.
#include <stdio.h>
#include <string.h>

struct student
{
    // char *name;
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    // here struct student is data type
    // s1 is variable of type struct student
    s1.roll = 24;
    s1.cgpa = 8.8;
    // s1.name = "guruprasad";
    strcpy(s1.name, "guruprasad");
    strcpy(s1.name, "student");
    // lets display the members of the sturcture
    printf("student name= %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    return 0;
}


