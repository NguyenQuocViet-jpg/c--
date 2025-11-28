#include <stdio.h>

int main()
{
    int a, b, x, y;
    printf("Tử và mẫu số thứ nhất: ");
    scanf("%d %d", &a,&x);

    
    printf("Tử và mẫu số thứ hai: ");
    scanf("%d %d", &b,&y);

    int tong_tu = a * y + b * x;
    int tong_mau = x * y;

    int hieu_tu = a * y - b * x;
    int hieu_mau = x * y;

    int tich_tu = a * b;
    int tich_mau = x * y;

    int thuong_tu = a * y;
    int thuong_mau = x * b; 
    
    printf("Tổng của hai phân số là: %d/%d\n", tong_tu,tong_mau);

    return 0;
}