#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
} s1; // another way of creating struct variables

struct Person
{
    int age;
    float salary;
} person1, person2, p[20]; // another way of creating struct variables

int main()
{
    s1.roll = 24;
    s1.cgpa = 8.8;
    strcpy(s1.name, "guruprasad");

    printf("student name= %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}
