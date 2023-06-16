// EOF : End Of File
/* fgetc returns EOF to show that the file has ended */
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    char ch;
    ch = fgetc(ptr);
    while (ch != EOF)
    {
        printf("character= %c\n", ch);
        ch = fgetc(ptr);
    }
    printf("\n");
    return 0;
}