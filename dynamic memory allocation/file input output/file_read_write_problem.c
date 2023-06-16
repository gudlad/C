// problem statement: 2 numbers -a & b are written in a file. Write a program to replace them with their sum
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("test_data.txt", "r");
    int a;
    fscanf(ptr, "%d", &a);
    printf("read a: %d\n", a);
    int b;
    fscanf(ptr, "%d", &b);
    printf("read b: %d\n", b);
    fclose(ptr);
    ptr = fopen("test_data.txt", "w");
    fprintf(ptr, "%d", a + b);
    printf("wrote sum %d to test_data.txt\n", a + b);
    fclose(ptr);
    return 0;
}