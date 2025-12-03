#include <stdio.h>

int main()
{
    int n;
    printf("Nhập số phần tử trong mảng: ");
    scanf("%d", &n);

    int nguyen[n];

    for(int k = 0; k < n; k++)
    {
        printf("Nhập mảng nguyen[%d]: ", k);
        scanf("%d", &nguyen[k]);
    }

    int max = nguyen[0];
    for(int k = 0; k < n; k++)
    {
        if(nguyen[k] > max)
        {
            max = nguyen[k];
        }
    }

    int min = nguyen[0];
    for(int k = 0; k < n; k++)
    {
        if(nguyen[k] < min)
        {
            min = nguyen[k];
        }
    }

    printf("Giá trị lớn nhất trong mảng là %d\n", max);
    printf("Giá trị nhỏ nhất trong mảng là: %d\n", min);

    return 0;
}