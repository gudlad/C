#include<stdio.h>
int main()
{
/*
Pointer to Pointer :
A variable that stores the memory address of another pointer.

int **pptr to store the address of integer pointer
char **pptr to store the address of character pointer
float **pptr to store the address of float pointer

*/
//example:
/*
float price=100.00;
float *ptr=&price;
float **pptr=&ptr;
*/
int i=5;
int *ptr=&i;
int **pptr=&ptr;
printf("%d\n",**pptr); // using **pptr to print the value at i
return 0;
}
