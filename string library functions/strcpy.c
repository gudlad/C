#include <stdio.h>
#include <string.h>
int main()
{
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    // strcpy(new String, old String)
    // strcpy copies the value of the old string to new string..
    strcpy(newStr, oldStr);
    puts(newStr);
    return 0;
}