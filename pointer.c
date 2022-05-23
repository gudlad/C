#include<stdio.h>
int main()
{
int *ptr;
int a=4;
ptr=&a;
printf("ptr is a pointer that holds the address of a");
printf("using *ptr we can print the value of a i.e %d",*ptr);
printf("see the changes");
return 0;

}
