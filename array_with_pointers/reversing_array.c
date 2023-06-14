#include <stdio.h>
void reverse(int a[], int n);
void printArray(int a[], int n);
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = 5;
    reverse(a, size); // REMEMBER :array itself is a pointer so changes will be reflected every where
    printArray(a, size);

    return 0;
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int first = a[i];
        int second = a[n - i - 1];
        a[i] = second;
        a[n - i - 1] = first;
    }
}