#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int a;
    // int* ptr=&a;
    // printf("enter a number :\n");
    // scanf("%d", *ptr);
    // printf("value : %d\n",a);
    int *ptr=(int*)malloc(5*sizeof(int));
    int temp=1;
    for(int i=0;i<5;i++)
    {
        ptr[i]=temp;
        temp+=2;
    }
    ptr=realloc(ptr,6);
    int temp2=2;
    for(int i=0;i<6;i++)
        {
            ptr[i]=temp2;
            printf("stored %d ",ptr[i]);
            temp2+=2;
        }
    for(int i=0;i<6;i++)
        {
            printf("%d ",ptr[i]);
        }
        free(ptr);
}