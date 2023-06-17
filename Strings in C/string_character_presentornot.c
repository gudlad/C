#include <stdio.h>
void checkCharacter(char str[], char ch);
int main()
{
    char str[100] = "ApnaCollege";
    char ch = 'a';
    checkCharacter(str, ch);
    return 0;
}

void checkCharacter(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present in the string\n");
            return; // just return back from the function if character is present.
        }
    }
    printf("Character is not present in the string.\n");
}
