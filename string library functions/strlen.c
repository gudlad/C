#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "guruprasad shettigar";
    // strlen(str) : is a string library function that counts number of character excluding '\0'
    // the strlen(str) returns unsigned long which we can type cast to int or unsigned int
    int length = strlen(name);
    printf("the length of string is %d\n", length);
    return 0;
}