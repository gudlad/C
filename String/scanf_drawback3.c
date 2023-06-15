// scanf() can't read multi word strings with spaces
// so we use the gets() and puts()
// gests() is somewhat Outdated so we use the fgets()
#include <stdio.h>
int main()
{
    char name[100];
    // fgets(str,n,file);
    // stops when n-1 chars input or new line entered
    printf("Enter the string:\n");
    fgets(name, 20, stdin);
    puts(name); // next line is added automatically.
    return 0;
}