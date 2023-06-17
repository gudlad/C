#include <stdlib.h>
#include <stdio.h>

int main() {
    char str1[] = "12345"; // 12345
    char str2[] = "abc"; // 0
    char str3[] = "12a"; // 12
    char str4[] = "a3b4"; // 0
    char str5[] = "1b2c3d"; // 1

    int num = atoi(str1);
    printf("The converted integer is: %d\n", num);
    // printf("%d\n", sizeof(str2));
    return 0;
}
