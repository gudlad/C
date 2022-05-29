#include <stdio.h>
#include <string.h>
// typedef is a key word in c
// it creates a alternative for data types
// used to create alias for data types

// user defined
typedef struct computerEngineeringStudent
{
    int roll;
    float cgpa;
    char name[10];
} ces; // here ces will be alias for computerEngineeringStudent
typedef int i;
typedef float fl;
int main()
{
    i intUsingAlias = 34;     // because of using typedef  we can use i instead of int
    fl floatUsingAlias = 5.5; // because of using typedef  we can use fl instead of float

    ces s1; // alias datatype

    s1.roll = 24;
    s1.cgpa = 8.8;

    strcpy(s1.name, "guruprasad");

    printf("student name= %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}