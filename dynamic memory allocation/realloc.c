// problem: allocate teh memory for 5 numbers. Then dynamically increase it to 8 numbers.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int)); // memory size: 5

    printf("enter numbers(5):\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    // now let use increase the memory size by 2 more i.e using the realloc
    ptr = realloc(ptr, 7); //  memory size : 7

    printf("enter numbers(8):\n");
    for (int i = 5; i < 7; i++)
    {
        scanf("%d", &ptr[i]);
    }
    // now let us print the entered numbers
    for (int i = 0; i < 7; i++)
    {
        printf("number %d is %d\n", i, ptr[i]);
    }
    // now finally the memory can be released
    free(ptr);
    return 0;
}