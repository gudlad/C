#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} v;

void calSumVector(v v1, v v2, v *ptr);

int main()
{
    v v1 = {1, 2};
    v v2 = {3, 5};
    v sum = {0};
    v *ptr = &sum;
    calSumVector(v1, v2, ptr); // by passing pointers we can reflect changes here also..
    printf("sum.x %d  \nsum.y %d\n", sum.x, sum.y);

    return 0;
}

void calSumVector(v v1, v v2, v *ptr)
{
    ptr->x = v1.x + v2.x;
    ptr->y = v1.y + v2.y;
    printf("sum.x %d  \nsum.y %d\n", ptr->x, ptr->y);
}