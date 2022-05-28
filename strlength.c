#include <stdio.h>
int main()
{
    char name[30];
    int count = 0, i = 0;
    printf("enter name\n");
    fgets(name, 200, stdin);
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    puts(name);
    printf("length of string is: %d\n", count - 1);

    return 0;
}