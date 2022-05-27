#include <stdio.h>
// void printNumbers(int arr[], int n);
void printNumbers(int *arr, int n);

int main()
{
    int n = 6;
    int arr[] = {1,
                 2,
                 3,
                 4,
                 5,
                 6};
    printNumbers(arr, n);

    return 0;
}

// void printNumbers(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", a[i]);
//     }
// }

void printNumbers(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }
}