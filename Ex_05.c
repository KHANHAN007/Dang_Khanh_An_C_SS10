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
        int swap = 1;
        for (int j = 0; j < i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                swap = 0;
            }
        }
        if (swap)
            break;
    }
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
int linearSearch(int a[], int n, int value)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == value)
            return i + 1;
    }
    return -1;
}
void binary(int a[], int n, int value)
{
    // bubbleSort(a, n);
    // insertionSort(a, n);
    int idx = linearSearch(a, n, value);
    selectionSort(a, n);
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (value > a[m])
            l = m + 1;
        else if (value < a[m])
            r = m - 1;
        else
        {
            printf("Tim thay %d tai vi tri %d.\n", value, idx);
            return;
        }
    }
    printf("Khong tim thay");
}
int main()
{
    int a[10] = {0, 44, 27, 43, 14, 9, 24, 14, 3, 26}, n = 10;
    int value;
    printf("Nhap mot so vao de tim kiem");
    scanf("%d", &value);
    // linear(a, n, value);
    binary(a, n, value);
    xuat(a, n);
}