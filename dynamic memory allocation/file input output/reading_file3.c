//! File opening modes
// "r"
// "w"
// "a"
// "rb"
// "wb"


// reading from a file
#include <stdio.h>
/*
char ch;
fscanf(fptr,"%c",&ch)

fscanf() -- is used for reading data from a file and storing data in some variable

*/
int main()
{
    //? opening a file
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    char ch;
    int i;
    fscanf(fptr, "%c", &ch);
    printf("%c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("%c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("%c\n", ch);

    fscanf(fptr, "%d", &i);
    printf("%d\n", i);

    fscanf(fptr, "%d", &i);
    printf("%d\n", i);

    fclose(fptr);
    return 0;
}

// fopen();
// fclose();
// fscanf();


