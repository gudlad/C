#include<stdio.h>
void doWork(int a,int b,int* sum,int* prod,int* avg);
int main()
{
int a=3,b=5;
int sum,prod,avg;
doWork(a,b,&sum,&prod,&avg);  // we send the variables which are empty and then store values inside them in the function and return back
// this technique is use for returning multiple valuesS
printf("sum=%d, prod=%d, avg=%d\n",sum,prod,avg);
return 0;
}

void doWork(int a,int b,int* sum,int* prod,int* avg){
*sum=a+b;
*prod=a*b;
*avg=(a+b)/2;
}
