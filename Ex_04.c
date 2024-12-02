#include <stdio.h>

void xuat(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        int idx_min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[idx_min])
                idx_min = j;
        }
        if (idx_min != i)
        {
            int tmp = a[i];
            a[i] = a[idx_min];
            a[idx_min] = tmp;
        }
    }
}
int main()
{
    int a[10] = {0, 44, 27, 43, 14, 9, 24, 14, 3, 26}, n = 10;
    printf("Mang trc khi sx: ");
    xuat(a, n);

    selectionSort(a, n);
    printf("Mang sau khi sx: ");
    xuat(a, n);
}