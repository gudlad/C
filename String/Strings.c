// STRINGS IN C
#include <stdio.h>
void printString(char arr[]);
int main()
{
    // char size is 1 byte
    // we delcare strings in 2 ways

    // 1 st way
    char name[] = {'g', 'u', 'r', 'u', 'p', 'r', 'a', 's', 'a', 'd', '\0'};
    // don't forget to put null character at the end of the char array
    // if don't put the null character at the end then can't access the specila methods of the string and array is treated as just normal array

    // second way
    char Name[] = "guruprasad";
    // here the null character is automatically added by the compiler to the end
    char place[] = "India Karnataka";
    printString(place);
    printString(Name);
    return 0;
}

void printString(char arr[])
{
    //  iterating a character array
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}