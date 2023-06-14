#include<stdio.h>
int main()
{
int age=12;
int *ptr=&age;
// printing the values
printf("%d\n",age);
printf("%d\n",*ptr);
printf("%d\n",*(&age));


return 0;
}