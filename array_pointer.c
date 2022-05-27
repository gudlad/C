#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3};
    /* array is a pointer
    In c the array's name (here a) is a pointer which points to the zeroth index of the array
    */
    int *ptr = &a[0];
    /* or int *ptr=a; */

    return 0;
}