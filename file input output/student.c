#include <stdio.h>
int main()
{
    FILE *ptr;
    // ptr = fopen("studentFile.txt", "w");
    ptr = fopen("studentFile.txt", "a");

    char name[100];
    int age;
    float cgpa;

    // reading information from the user
    printf("Enter name:\n");
    scanf("%s", name);
    printf("Enter age:\n");
    scanf("%d", &age);
    printf("Enter cgpa:\n");
    scanf("%f", &cgpa);

    // storing the information to the file
    fprintf(ptr, "%s\t", name);
    fprintf(ptr, "%d\t", age);
    fprintf(ptr, "%f\n", cgpa); // in float after the decimal point there will be 6 values

    fclose(ptr);
    return 0;
}