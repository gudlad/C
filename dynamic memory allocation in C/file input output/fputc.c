/*
 fgetc(fptr)   is used for reading character by character  from the file

fputc(ptr,)
*/

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "a");
    fputc('\n', fptr);
    fputc('A', fptr);
    fputc('n', fptr);
    fputc('d', fptr);
    fputc('A', fptr);
    fputc('m', fptr);
    return 0;
}