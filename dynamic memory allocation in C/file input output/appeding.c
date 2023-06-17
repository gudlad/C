// writing to a file
#include <stdio.h>
/*
appending to file
*/
int main()
{
    FILE *fptr;
    fptr = fopen("newTest2.txt", "a");
    fprintf(fptr, "\n");
    fprintf(fptr, "%c", 't');

    fprintf(fptr, "%c", 'a');

    fprintf(fptr, "%c", 'n');

    fprintf(fptr, "%c", 'g');

    fprintf(fptr, "%c", 'o');
    fclose(fptr);
    return 0;
}