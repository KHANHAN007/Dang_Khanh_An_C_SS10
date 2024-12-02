#include <stdio.h>

void xuat(int a[][50], int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
void selectionSort(int a[], int m)
{
    for (int i = 0; i < m; ++i)
    {
        int idx_min = i;
        for (int j = i + 1; j < m; ++j)
        {
            if (a[j] < a[idx_min])
                idx_min = j;
        }
        if (idx_min != i)
        {
            int tmp = a[idx_min];
            a[idx_min] = a[i];
            a[i] = tmp;
        }
    }
}
void sortRow(int a[][50], int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        selectionSort(a[i], m);
    }
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[50][50];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            scanf("%d", &a[i][j]);
    }
    sortRow(a, n, m);
    xuat(a, n, m);
}