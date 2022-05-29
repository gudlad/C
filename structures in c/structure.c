// structure is a collection of values of different data types
// structure is a user defined datatype (custom data type)
// ex:
/*
for
a student store the following
name (string)
roll no (integer)
cgpa (float)

*/
#include <stdio.h>
#include <string.h>
// structure declaration for student;
struct student // data type
{
    char name[100]; // properties
    int roll;
    float cgpa;
}; // this is like a blue print of user defined data type

int main()
{
    struct student s1;
    // here struct student is data type
    // s1 is variable of type struct student
    s1.roll = 24;
    s1.cgpa = 8.8;
    // s1.name="guruprasad"; error
    //  strings defined with array notations can't be changed but we can copy to it
    // strings defined with pointer notation can be changed;
    strcpy(s1.name, "guruprasad");

    // lets display the members of the sturcture
    printf("student name= %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}
/*

1. create the structure design
2. create the variable for the structure
3. create values for the variable of type structure you created.

*/