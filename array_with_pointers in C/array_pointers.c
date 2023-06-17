#include <stdio.h>
int main()
{
    int a[5];
    *a = 10;
    printf("%d\n", a[0]);
    // *(a+i) is same as a[i]
    // we can't reassing the array name like other pointer i.e we can't do a++ which is a=a+1 but we can do a++
    *(a + 1) = 20;
    printf("%d\n", a[1]);
    return 0;
}