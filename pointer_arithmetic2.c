// when we do arithmetic operation on pointers (+-..) the two pointers should be of same type otherwise it will result in error
#include <stdio.h>
int main()
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n", ptr);
    printf("%u\n", _ptr);
    printf("difference = %u\n", ptr - _ptr); // difference between ptr and _ptr is 4 bytes i.e output will be 1 (1 integer = 4 bytes)
    _ptr = &age;
    printf("comparision = %u\n", ptr == _ptr);
    return 0;
}