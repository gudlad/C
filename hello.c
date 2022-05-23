#include<stdio.h>
void callme(void);
int main()
{
    printf("Hello World!!");
    printf("commiting to the repository.");
    callme();
    return 0;
}

void callme()
{
    int age=21;
    printf("hi my name is guruprasad i am  %d years old.",age);
}