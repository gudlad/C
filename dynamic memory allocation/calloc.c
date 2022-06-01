#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    // ptr = (float *)malloc(5 * sizeof(float));
    // malloc doesn't garantee that he memory locations will be initialized to 0
    ptr = (float *)calloc(5, sizeof(float));
    // when you want to initialize the memory locations with 0 always use the calloc

    // ptr[0] = 1;
    // ptr[1] = 2;
    // ptr[2] = 3;
    // ptr[3] = 4;
    // ptr[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}