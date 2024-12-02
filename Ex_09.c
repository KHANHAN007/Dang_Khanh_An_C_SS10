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
void sortDia(int a[][50], int n, int m)
{
    int lengh = n < m ? n : m;
    int tmp[lengh];

    for (int i = 0; i < lengh; ++i)
    {
        tmp[i] = a[i][i];
    }

    for (int i = 0; i < lengh - 1; ++i)
    {
        for (int j = i + 1; j < lengh; ++j)
        {
            if (tmp[i] > tmp[j])
            {
                int temp = tmp[i];
                tmp[i] = tmp[j];
                tmp[j] = temp;
            }
        }
    }
    for (int i = 0; i < lengh; ++i)
    {
        a[i][i] = tmp[i];
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
    sortDia(a, n, m);
    xuat(a, n, m);
}