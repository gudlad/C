#include<stdio.h>
void printAdrress(int n);
void _printAddress(int* n);
int main()
{
int n=4;
printf("address of n is %p\n",&n); 
// call by value
printAdrress(n);
// call by reference
_printAddress(&n);
return 0;
}

void  printAdrress(int n){
    printf("address of n is %p\n",&n); // address will be same in case of call by value as new copy of the variable will be created
}

void _printAddress(int* n){
    printf("address of n is %p\n",n); // same addrees will be used

}
