#include<stdio.h>
void square(int n);
void _square(int* n);
int main()
{
int number=4;
square(number); // 16
printf("number=%d\n",number); // 4 pass by value;

int* ptr=&number;
//_square(&number);
_square(ptr);
printf("number=%d\n",number); // 4 pass by reference;
return 0;
}

void square(int n){
n=n*n;
printf("squre=%d\n",n);
}

void _square(int* n) 
// pointer function
// here n is pointer variable.
{
*n=(*n)*(*n);  // (address of number)  = 4 * 4
printf("square=%d\n",*n);    // 16
}