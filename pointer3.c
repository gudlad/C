#include<stdio.h>
int main()
{
int x;
int *ptr;
ptr=&x;
*ptr=0;
printf("value of x is %d\n",x);
return 0;
}


