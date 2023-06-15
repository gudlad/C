#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", *(arr + 2));
    printf("%d\n", *(arr + 3));
    return 0;
}


//! passing array to function
// void printNumbers(int*arr,int n);
//? or
// void pointNumbers(int arr[],int n);

// pointNumbers(arr,n);