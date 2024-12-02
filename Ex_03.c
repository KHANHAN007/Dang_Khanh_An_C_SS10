#include <stdio.h>

void xuat(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int tmp = a[i], j = i - 1;
        while (j >= 0 && a[j] > tmp)
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = tmp;
    }
}
int main()
{
    int a[10] = {0, 44, 27, 43, 14, 9, 24, 14, 3, 26}, n = 10;
    printf("Mang trc khi sx: ");
    xuat(a, n);

    insertionSort(a, n);
    printf("Mang sau khi sx: ");
    xuat(a, n);
}