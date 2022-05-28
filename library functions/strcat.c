#include <stdio.h>
#include <string.h>
int main()
{
    // strcat : concatenates first string with second string
    char firstStr[100] = "hello "; // we have to specify the size of the first array otherwise error occurs as it will take the size of hello  and there will no spce to keep secString.
    char secString[] = "World";
    strcat(firstStr, secString);
    puts(firstStr);
    printf("%ld\n", strlen(firstStr));
    return 0;
}