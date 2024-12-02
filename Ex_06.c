#include <stdio.h>

int linearSearch(int a[], int n, int value)
{
    int tmp[n], count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == value)
            tmp[count++] = i + 1;
    }

    if (count > 0)
    {
        printf("Tim thay %d tai ca vi tri ", value);
        for (int i = 0; i < count; ++i)
        {
            printf("%d ", tmp[i]);
        }
    }
    else
        printf("Khong tim thay.");
}
int main()
{
    int a[10] = {0, 44, 27, 43, 14, 9, 24, 14, 3, 26}, n = 10;
    int value;
    printf("Nhap mot so vao de tim kiem");
    scanf("%d", &value);
    linearSearch(a, n, value);
}