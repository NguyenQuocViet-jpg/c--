#include <stdio.h>

int main()
{
    int a, b; 

    printf("Nhập giá trị thứ Nhất: ");
    scanf("%d", &a);
    printf("Nhập giá trị thứ hai: ");
    scanf("%d", &b);

    float tong = a + b;
    float hieu = a - b;

    printf("Tổng của hai số là: %.2f\n", tong);
    printf("Hiệu của hai số là: %.2f", hieu);

    return 0;
}