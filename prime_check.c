#include <stdio.h>
#include <math.h>
int main()
{
int c;
int i=2;
do{
    printf("Enter the no to check prime or not:");
    scanf("%d",&c);
   if(c%i==0)
   {
    printf("not prime");
    break;
   }
    i++;
}while(i<=sqrt(c));
}