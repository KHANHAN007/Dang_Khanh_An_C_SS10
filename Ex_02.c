#include <stdio.h>

void xuat(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}
void bubbleSort(int a[], int n)
{
    for (int i = n - 1; i > 0; --i)
    {
        int swap = 0;
        for (int j = 0; j < i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                swap = 1;
            }
        }
        if (!swap)
            break;
    }
}
int main()
{
    int a[10] = {0, 44, 27, 43, 14, 9, 24, 14, 3, 26}, n = 10;
    printf("Mang trc khi sx: ");
    xuat(a, n);

    bubbleSort(a, n);
    printf("Mang sau khi sx: ");
    xuat(a, n);
}