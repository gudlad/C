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
    struct student ECE[100]; // struct array for 100 ece students;
    struct student COE[100]; // struct array for 100 coe students;
    struct student IT[100];  // struct array for 100 it students;
    // we can access the

    ECE[0].roll = 123; // first student of ECE
    strcpy(ECE[0].name, "E1");
    ECE[0].cgpa = 4.5;
    printf("roll no %d\n", ECE[0].roll);
    printf("name %s\n", ECE[0].name);
    printf("cgpa is %f\n", ECE[0].cgpa);

    printf("\n");

    ECE[1].roll = 124; //  second student of ECE
    strcpy(ECE[1].name, "E2");
    ECE[1].cgpa = 4.6;
    printf("roll no %d\n", ECE[1].roll);
    printf("name %s\n", ECE[1].name);
    printf("cgpa is %f\n", ECE[1].cgpa);
    return 0;
}