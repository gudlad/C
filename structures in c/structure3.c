#include <stdio.h>
#include <string.h>
// structures are stored in continuous memory locations

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    s1.roll = 24;
    s1.cgpa = 8.8;
    strcpy(s1.name, "guruprasad");
    printf("student name= %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 25;
    s2.cgpa = 8.9;
    strcpy(s2.name, "unknown2");
    printf("student name= %s\n", s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 26;
    s3.cgpa = 9.9;
    strcpy(s3.name, "unknown3");
    printf("student name= %s\n", s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);
    return 0;
}
