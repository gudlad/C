/*
 fgetc(fptr)   is used for reading character by character  from the file

fputc(ptr,)
*/

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%d\n", fgetc(fptr));
    return 0;
}