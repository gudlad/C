#include <stdio.h>
#include <string.h>

/*
Return Value	Remarks
0	           if strings are equal
>0	           if the first non-matching character in     str1 is greater (in ASCII) than that of str2.
<0	           if the first non-matching character in str1  is lower (in ASCII) than that of str2.

*/
int main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str2 and str1
    result = strcmp(str2, str1);
    printf("strcmp(str2, str1) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}
