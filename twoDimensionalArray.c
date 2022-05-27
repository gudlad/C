#include <stdio.h>
void storeTable(int arr[][10], int n, int m, int num);
int main()
{
    int tables[2][10]; // 2D array with 2(0,1) rows and 10(0-9) columns
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[0][i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[1][i]);
    }
    return 0;
}
// when we pass 2d arrays first dimension is treated as pointer and the second dimension is treated as an array where we have to give the size
void storeTable(int arr[][10], int n, int m, int num)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = num * (i + 1);
    }
}