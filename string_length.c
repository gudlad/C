#include <stdio.h>
int countLength();
int main()
{
    char name[100];
    fgets(name, 80, stdin);
    printf("length of the string is %d\n", countLength(name));
    return 0;
}

/*
int countLength(char arr[])
{
    int length = 0;
    int *ptr = &length;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("before %d\n", *ptr);
        *ptr += 1;
        printf("after %d\n", *ptr);
    }
    return *ptr - 1;
}

*/

int countLength(char arr[])
{
    int count = 0, i = 0;
    // printf("before the loop count %d\n", count);
    // for (int i = 0; arr[i] != '\0'; i++)
    // {
    //     printf("i value : %d\n", i);
    //     count++;
    //     printf("count value : %d\n", count);
    // }
    // return count - 1;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count - 1;
}