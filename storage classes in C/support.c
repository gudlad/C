#include<stdio.h>

void display()
{
    extern int x;
    ++x;
    printf("hello from support file ");
    printf("x=%d",x);
}