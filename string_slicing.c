#include <stdio.h>
void slice(char str[], int n, int m);
int main()
{
    char str[100] = "HelloWorld";
    slice(str, 3, 6);
    return 0;
}

void slice(char str[], int n, int m)
{
    char newStr[10];
    int i, j;
    for (i = n, j = 0; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}
