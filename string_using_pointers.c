#include <stdio.h>
int main()
{
    char *str = "Hello World";
    // store canChangeing in memory & the assigned address is stored in char pointer canChange
    // canChange is pointing to index 0

    char *canChange = "Hello"; // can be reinitialized or changed
    puts(canChange);
    canChange = "World";
    puts(canChange);

    char cannotChange[] = "Hello World";
    puts(cannotChange);
    // can't be reinitialized
    return 0;
}