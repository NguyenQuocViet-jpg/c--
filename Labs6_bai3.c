#include <stdio.h>

int main()
{
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    int nguyen[n];
    for(int j = 0; j < n; j++)
    {
        printf("Nhập mảng nguyen[%d]: ", j);
        scanf("%d", &nguyen[j]);
    }

    int mang = 0;
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n; i++)
        {
            if(nguyen[j] > nguyen[i])
            {
                mang = nguyen[i];
                nguyen[i] = nguyen[j];
                nguyen[j] = mang;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("Sắp xếp mảng theo phần tử giảm dần: %d\n", nguyen[i]);
    }

    return 0;
}   