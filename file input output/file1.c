// operations on file
/*
1.create a file
2.open a file
3.close a file
4.Read from a file
5.Write into a file

File Pointer:
FILE is a (hidden) structure that needs to be created for opening a file
a FILE ptr that points to this structure & is used to access the file.

FILE *fptr;

fptr = fopen("filename",mode);

closing a file..
fclose(fptr);

*/
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    // when we open a file the system allocates resources for us which slows the performance of the system so it is our responsibilty to return the allocated resource back to the system after the file operations i.e closing the file
    fclose(fptr);
    return 0;

    /*
    file opening modes:
    "r"  -- open to read
    "rb" --  read binary
    "w"  -- open to write
    "wb"  -- open to write binary
    "a"   --  open to append
    */