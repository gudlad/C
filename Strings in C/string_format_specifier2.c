#include <stdio.h>
int main()
{
    // string format specifier --- %s
    char name[] = "guruprasad";
    printf("%s\n", name);
    char address[10];
    scanf("%s", address); // address itself is a pointer(holds addresss) so no need for using -- &
    // also null character is applied automatically.
    printf("%s Your addreess is %s\n", name, address);
    return 0;
}