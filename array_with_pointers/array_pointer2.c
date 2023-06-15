#include <stdio.h>
int main()
{
    int aadhar[5];
    // int* ptr=&aadhar[0];
    // or
    int *ptr = aadhar;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the numbers:\n");
        printf("%d index :\n", i + 1);
        scanf("%d", (ptr + i));
        // scanf("%d",  &aadhar[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("aadhar[%d] : %d\n", i, *(ptr + i));
        // printf("aadhar[%d] : %d\n", i, aadhar[i]);
    }

    return 0;
}