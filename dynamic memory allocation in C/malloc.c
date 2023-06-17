#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("size of int %d bytes\n", sizeof(int));
    printf("size of float %d bytes\n", sizeof(float));
    printf("size of char %d bytes\n", sizeof(char));
    float *ptr;
    // ptr = (int *)malloc(5 * sizeof(int));
    ptr = (float *)malloc(5 * sizeof(float));
    // you can now use the ptr just like the array.
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}