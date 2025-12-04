#include <stdio.h>

void imputArray(int x[10], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
}
void outputArray(int x[10], int n)
{
    int c;
    for(c = 0; c < n; c++)
    {
        printf("x[%d]: %d\n", c, x[c]);
    }
}
int elementOddArray(int x[10], int n)
{
    int i;
    int cout = 0;
    for(i = 0; i < n; i++)
    {
        if(x[i] % 2 != 0)
        {
            cout++;
        }
    }
    return cout;
}
int elementEvenArray(int x[10], int n)
{
    int i;
    int cout = 0;
    for(i = 0; i < n; i++)
    {
        if(x[i] % 2 == 0)
        {
            cout++;
        }
    }
    return cout;
}
int elementOddTotalArray(int x[10], int n)
{
    int i;
    int tong = 0;
    for(i = 0; i < n; i++)
    {
        if(x[i] % 2 != 0)
        {
            tong += x[i];
        }
    }
    return tong;
}
int elementEvenTotalArray(int x[10], int n)
{
    int i;
    int tong = 0;
    for(i = 0; i < n; i++)
    {
        if(x[i] % 2 == 0)
        {
            tong += x[i];
        }
    }
    return tong;
}
int main()
{
    int a[10], size;
    printf("Nhấp số lượng phần tử trong mảng: ");
    scanf("%d", &size);

    imputArray(a, size);

    printf("Mảng vừa nhập:\n");
    outputArray(a, size);

    printf("Số phần tử lẻ trong mảng: %d\n", elementOddArray(a, size));

    printf("Số phần tử chẵn trong mảng: %d\n", elementEvenArray(a, size));

    printf("Tổng các phần tử lẻ: %d\n", elementOddTotalArray(a, size));

    printf("Tổng các phần tử chăn: %d\n", elementEvenTotalArray(a, size));

    printf("Các phần tử chia hết cho 3: ");
    for(int i = 0; i < size; i ++)
    {
        if(a[i] % 3 == 0) printf("\ta[%d]: %d\t", i, a[i]);
    }

    return 0;
}