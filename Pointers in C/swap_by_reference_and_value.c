#include<stdio.h>
void swap(int a,int b);
void _swap(int* a,int* b);

int main()
{
int x=3,y=5;

// call by value
printf("using call by value:\n");
swap(x,y);
 printf("x=%d y=%d\n",x,y);

// call by reference
printf("using call by reference\n");
_swap(&x,&y);
 printf("x=%d y=%d\n",x,y);
return 0;
}

void swap(int a,int b){ // call by value;
int t=a;
 a=b;
 b=t;
 printf("a=%d b=%d\n",a,b);
}

void  _swap(int* a,int* b){ // call by reference
int t=*a;
*a=*b;
*b=t;
 printf("a=%d b=%d\n",*a,*b);
}

/* the functions can return single value but when we want multiply values to be returned by the function  we can just pass the address of a variable  and do modification to that value then we need n't return anything and alue is also returned we follow these to return mulitple values from a function. */