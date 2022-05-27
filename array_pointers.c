#include<stdio.h>

// pointers arithmetic
// pointers can be incremented & decremented
// increameting or decremeting pointers means not by adding or substracting 1 it is by adding the no of bytes of variable that the pointer points to..
int main()
{
int age=22;
int *ptr=&age; // let the value at ptr i.e address of age is 2000
printf("ptr = %u\n",ptr);
ptr++; 
// when we do ptr++ the pointer value will not be like 2000+1 instead it is 2000 + 4bytes(size of int)  == 2004
// since the pointer is of type int it will increase by 4 bytes
// if the pointer is of type float it will increase by 4 bytes
// if the pointer is of type char it will increase by 2 bytes

printf("ptr = %u\n",ptr);
ptr--;  // here pointer value will decrease by 4 bytes 2004 - 4 bytes == 2000 bytes.
printf("ptr = %u\n",ptr);

printf("\n");
float price=20.0;
float* ptr2=&price;
printf("ptr2 = %u\n",ptr2);
ptr2++; 
printf("ptr2 = %u\n",ptr2);
ptr2--;  
printf("ptr2 = %u\n",ptr2);

printf("\n");
char a = '*';
char* ptr3=&a;
printf("ptr3 = %u\n",ptr3);
ptr3++; 
printf("ptr3 = %u\n",ptr3);
ptr3--; 
printf("ptr3 = %u\n",ptr3);
return 0;
}