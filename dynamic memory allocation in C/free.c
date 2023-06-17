#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)calloc(5, sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    free(ptr); // we freed the memory and again allocate ptr with memory

    ptr = (int *)calloc(2, sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}