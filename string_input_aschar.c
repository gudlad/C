#include <stdio.h>
int main()
{
    char str[100];
    char ch;
    printf("Enter the characters:");
    int i = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}