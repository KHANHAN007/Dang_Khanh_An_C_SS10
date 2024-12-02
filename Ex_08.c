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
void sortRow(int a[][50], int n, int m)
{
    for (int col = 0; col < m; ++col)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (a[i][col] > a[j][col])
                {
                    int tmp = a[i][col];
                    a[i][col] = a[j][col];
                    a[j][col] = tmp;
                }
            }
        }
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