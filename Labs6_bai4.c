#include <stdio.h>

int main()
{
    int n, m;
    printf("Nhập số hàng trong mảng: ");
    scanf("%d", &n);
    printf("Nhập số cột trong mảng: ");
    scanf("%d", &m);

    int nguyen[n][m];
    for(int k = 0; k < n; k++)
    {
        for(int l = 0; l < m; l++)
        {
            printf("Nhập mảng nguyen[%d][%d]: ", k, l);
            scanf("%d", &nguyen[k][l]);
        }
    }

    for(int k = 0; k < n; k++)
    {
        for(int l = 0; l < m; l++)
        {
            printf("Bình phương phần tử nguyen[%d][%d] trong mảng: %d\n", k, l, nguyen[k][l] * nguyen[k][l]);
        }
    }

    return 0;
}