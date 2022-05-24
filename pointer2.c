#include<stdio.h>
int main()
{
// * --value at operator
// & --address operator
int age=22;
int *ptr=&age;  // to store the adress of variable of type int age=22;
// char * ptr   to the store address of variable of type char a='*';
// float *ptr   to the  store the addresss of variable of type float a=0.3;
int _age=*ptr;
printf("%d\n",_age);
// we can use the %p format specifire to print the address values(hexvalue)
printf("%p\n",&age); // both value will be same
printf("%p\n",ptr);
printf("%p\n",&ptr); /// pointer will have its own address

// to convert hex values to int we can use the %u (unsigned int) specifier
printf("%u\n",&age); // both value will be same
printf("%u\n",&ptr);
printf("%u\n",ptr);
return 0;
}