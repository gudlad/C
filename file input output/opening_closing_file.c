
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    if (fptr == NULL)
    {
        printf("file doesn't exist\n");
    }
    else
        fclose(fptr);

    fptr = fopen("newTest.txt", "w");
    if (fptr == NULL)
    {
        printf("file doesn't exist\n");
    }
    else
        fclose(fptr);
    return 0;
    return 0;
}