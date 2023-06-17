// writing to a file
#include <stdio.h>
/*

fprintf(fptr,"%c","character")

fscanf() -- is used for writing data to a file and
all the data within the file is replaced by new data
*/
int main()
{
    FILE *fptr;
    fptr = fopen("newTest2.txt", "w");

    fprintf(fptr, "%c", 'M');

    fprintf(fptr, "%c", 'a');

    fprintf(fptr, "%c", 'n');

    fprintf(fptr, "%c", 'g');

    fprintf(fptr, "%c", 'o');

    fclose(fptr);
    return 0;
}