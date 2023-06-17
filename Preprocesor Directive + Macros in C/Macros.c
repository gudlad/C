#include<stdio.h>
#define MUL(a,b) ((a) * (b))
#define GRT(a,b) if(a>b)\
                    printf("a is greater");\
                else\
                    printf("b is greater");

int main()
{
printf("%d\n",MUL(3+1,1+1));
GRT(3,4);
return 0;
}